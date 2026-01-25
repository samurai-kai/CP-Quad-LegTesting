#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
import math
from safety import validate_command_FK


class FKTestNode(Node):
    def __init__(self):
        super().__init__('FKTestNode')

        # -----------------------------
        # Parameters
        # -----------------------------
        self.declare_parameter('joint_names', [
            'link1_to_base',
            'link2_to_link1',
            'link3_to_link2'
        ])

        self.declare_parameter('command_period', 3.0)   # seconds between commands
        self.declare_parameter('joint_sequence_flat', [0.0])
        self.declare_parameter('input_in_degrees', False)
        self.declare_parameter('step_loop', True)

        # -----------------------------
        # Read parameters
        # -----------------------------
        self.joint_names = list(self.get_parameter('joint_names').value)
        self.num_joints = len(self.joint_names)

        self.command_period = float(
            self.get_parameter('command_period').value
        )

        flat = list(self.get_parameter('joint_sequence_flat').value)
        input_in_degrees = self.get_parameter('input_in_degrees').value
        self.step_loop = self.get_parameter('step_loop').value

        if input_in_degrees:
            self.get_logger().info("Converting joint commands from DEGREES → RADIANS")
            flat = [math.radians(v) for v in flat]

        if len(flat) % self.num_joints != 0:
            self.get_logger().error(
                f"joint_sequence_flat length ({len(flat)}) "
                f"is not a multiple of number of joints ({self.num_joints})"
            )
            rclpy.shutdown()
            return

        # Reshape flat list into steps
        self.sequence = []
        for i in range(0, len(flat), self.num_joints):
            self.sequence.append(flat[i:i + self.num_joints])

        self.get_logger().info(
            f"Loaded {len(self.sequence)} FK steps | "
            f"command_period={self.command_period}s | "
            f"loop={self.step_loop}"
        )

        # -----------------------------
        # Publisher (STATIC JOINTS)
        # -----------------------------
        self.declare_parameter('command_topic', '/static_joints_controller/commands')
        self.command_topic = self.get_parameter('command_topic').value
        self.pub = self.create_publisher(
            Float64MultiArray,
            self.command_topic,
            10
        )

        self.step = 0

        # Timer controls *when* commands are sent
        self.timer = self.create_timer(self.command_period, self.run_step)

    # ----------------------------------------------------------

    def run_step(self):
        positions = self.sequence[self.step]

        valid, reason = validate_command_FK(positions)
        if not valid:
            self.get_logger().warn(f"Rejected FK cmd: {reason} | cmd={positions}")
            self.step += 1
            if self.step_loop:
                self.step %= len(self.sequence)
            else:
                if self.step >= len(self.sequence):
                    self.step = len(self.sequence) - 1
                    self.timer.cancel()
                    self.get_logger().info("Final FK command sent — holding position.")
            return

        msg = Float64MultiArray()
        msg.data = positions

        self.get_logger().info(
            f"Step {self.step + 1}/{len(self.sequence)} | "
            f"Cmd: {positions}"
        )

        self.pub.publish(msg)

        # Step bookkeeping
        self.step += 1
        if self.step_loop:
            self.step %= len(self.sequence)
        else:
            if self.step >= len(self.sequence):
                self.step = len(self.sequence) - 1
                self.timer.cancel()
                self.get_logger().info("Final FK command sent — holding position.")

# --------------------------------------------------------------
def main(args=None):
    rclpy.init(args=args)
    node = FKTestNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
