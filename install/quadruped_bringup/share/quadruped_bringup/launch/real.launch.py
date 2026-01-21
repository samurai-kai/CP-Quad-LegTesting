from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():

    # -------------------------------------------------
    # Robot description (CREATE ONCE)
    # -------------------------------------------------
    robot_description = Command([
        'xacro ',
        PathJoinSubstitution([
            FindPackageShare('rl12dof_urdf_description'),
            'urdf',
            'rl12dof_URDF_real.urdf.xacro'
        ])
    ])

    # -------------------------------------------------
    # Controller config
    # -------------------------------------------------
    controllers_yaml = PathJoinSubstitution([
        FindPackageShare('quadruped_utils'),
        'config',
        'controller.yaml'
    ])

    # -------------------------------------------------
    # Robot State Publisher
    # -------------------------------------------------
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[
            {'robot_description': robot_description}
        ]
    )

    # -------------------------------------------------
    # ROS 2 Control (Controller Manager)
    # -------------------------------------------------
    controller_manager = Node(
        package='controller_manager',
        executable='ros2_control_node',
        name='controller_manager',
        output='screen',
        parameters=[
            {'use_robot_description_topic': True},
            controllers_yaml,
        ],
    )

    # -------------------------------------------------
    # Launch
    # -------------------------------------------------
    return LaunchDescription([
        robot_state_publisher,
        controller_manager,
    ])
