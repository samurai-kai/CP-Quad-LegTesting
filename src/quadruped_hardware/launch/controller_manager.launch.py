from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():

    robot_description = Command([
        'xacro ',
        PathJoinSubstitution([
            FindPackageShare('rl12dof_urdf_description'),
            'urdf',
            'rl12dof_URDF_real.urdf.xacro'
        ])
    ])

    controllers_yaml = PathJoinSubstitution([
        FindPackageShare('quadruped_utils'),
        'config',
        'controller.yaml'
    ])

    return LaunchDescription([
        Node(
            package='controller_manager',
            executable='ros2_control_node',
            name='controller_manager',
            output='screen',
            parameters=[
                {'robot_description': robot_description},
                controllers_yaml,
            ],
        )
    ])
