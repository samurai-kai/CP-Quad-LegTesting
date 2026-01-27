ros2 run controller_manager spawner static_joints_controller --controller-manager /controller_manager
ros2 control set_controller_state static_joints_controller active
ros2 control list_controllers
ros2 topic pub /static_joints_controller/commands std_msgs/msg/Float64MultiArray "{data: [0.0, 0.35, 1.92]}"
ros2 topic pub -1 /static_joints_controller/kd_commands std_msgs/msg/Float64MultiArray "{data: [0.2, 0.5, 1.0]}"
ros2 topic pub -1 /static_joints_controller/kp_commands std_msgs/msg/Float64MultiArray "{data: [10.0, 15.0, 40.0]}"
