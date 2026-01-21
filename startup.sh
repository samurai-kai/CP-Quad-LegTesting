source /opt/ros/jazzy/setup.bash
colcon build \
--packages-skip bno08x_driver \
--packages-skip quadruped_mpc \
--cmake-args -DCMAKE_BUILD_TYPE=Release
source install/setup.bash