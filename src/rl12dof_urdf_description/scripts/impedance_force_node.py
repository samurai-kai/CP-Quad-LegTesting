#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import math

from ros_gz_interfaces.msg import EntityWrench
from geometry_msgs.msg import Wrench, Point
from visualization_msgs.msg import Marker


class ImpedanceForceNode(Node):
    """
    Applies a step external force to a Gazebo Sim link using ros_gz EntityWrench.
    Intended for impedance / disturbance rejection testing.
    """

    def __init__(self):
        super().__init__('impedance_force_node')

        # -------------------------------------------------
        # Parameters
        # -------------------------------------------------
        self.declare_parameter('publish_rate_hz', 500.0)

        # Gazebo targeting
        self.declare_parameter('world_name', 'foot_test')
        self.declare_parameter('model_name', 'rl12dof_urdf')
        self.declare_parameter('link_name', 'Foot_V3_Foot_v1_1')

        # Force definition (Newtons)
        self.declare_parameter('force.x', 0.0)
        self.declare_parameter('force.y', 0.0)
        self.declare_parameter('force.z', 200.0)

        # Timing (seconds)
        self.declare_parameter('timing.settle_time', 15.0)
        self.declare_parameter('timing.duration', 1.0)

        # -------------------------------------------------
        # Resolve parameters
        # -------------------------------------------------
        self.publish_rate = self.get_parameter('publish_rate_hz').value

        self.world_name = self.get_parameter('world_name').value
        self.model_name = self.get_parameter('model_name').value
        self.link_name  = self.get_parameter('link_name').value

        self.fx = self.get_parameter('force.x').value
        self.fy = self.get_parameter('force.y').value
        self.fz = self.get_parameter('force.z').value

        self.settle_time = self.get_parameter('timing.settle_time').value
        self.duration    = self.get_parameter('timing.duration').value

        self.entity_name = f'{self.model_name}::{self.link_name}'

        # -------------------------------------------------
        # Publishers
        # -------------------------------------------------
        self.wrench_pub = self.create_publisher(
            EntityWrench,
            f'/world/{self.world_name}/wrench',
            10
        )

        self.marker_pub = self.create_publisher(
            Marker,
            '/impedance_force_marker',
            1
        )

        # -------------------------------------------------
        # State
        # -------------------------------------------------
        self.start_time = None

        # Visualization origin (world frame, visual only)
        self.viz_x = 0.0
        self.viz_y = 0.0
        self.viz_z = 0.0

        # -------------------------------------------------
        # Timer
        # -------------------------------------------------
        self.timer = self.create_timer(
            1.0 / self.publish_rate,
            self.update
        )

        self.get_logger().info(
            f'Impedance force node applying wrench to [{self.entity_name}]'
        )

    # -------------------------------------------------

    def update(self):
        now = self.get_clock().now().nanoseconds * 1e-9

        if self.start_time is None:
            self.start_time = now

        t = now - self.start_time

        active = (
            self.settle_time <= t <
            self.settle_time + self.duration
        )

        fx = self.fx if active else 0.0
        fy = self.fy if active else 0.0
        fz = self.fz if active else 0.0

        # -----------------------------
        # Build wrench message
        # -----------------------------
        msg = EntityWrench()
        msg.entity.name = self.entity_name
        msg.entity.type = msg.entity.LINK

        wrench = Wrench()
        wrench.force.x = fx
        wrench.force.y = fy
        wrench.force.z = fz
        wrench.torque.x = 0.0
        wrench.torque.y = 0.0
        wrench.torque.z = 0.0

        msg.wrench = wrench
        self.wrench_pub.publish(msg)

        # Visualization
        self.publish_marker(fx, fy, fz)

    # -------------------------------------------------

    def publish_marker(self, fx, fy, fz):
        mag = math.sqrt(fx*fx + fy*fy + fz*fz)
        if mag == 0.0:
            return

        marker = Marker()
        marker.header.frame_id = 'world'
        marker.header.stamp = self.get_clock().now().to_msg()

        marker.ns = 'impedance_force'
        marker.id = 0
        marker.type = Marker.ARROW
        marker.action = Marker.ADD

        start = Point(x=self.viz_x, y=self.viz_y, z=self.viz_z)
        scale = 0.02  # meters per Newton (visual only)
        end = Point(
            x=start.x + scale * fx,
            y=start.y + scale * fy,
            z=start.z + scale * fz
        )

        marker.points = [start, end]

        marker.scale.x = 0.01
        marker.scale.y = 0.02
        marker.scale.z = 0.03

        marker.color.r = 1.0
        marker.color.g = 0.0
        marker.color.b = 0.0
        marker.color.a = 1.0

        self.marker_pub.publish(marker)


def main():
    rclpy.init()
    node = ImpedanceForceNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
