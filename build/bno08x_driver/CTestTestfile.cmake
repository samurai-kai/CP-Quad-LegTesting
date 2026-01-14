# CMake generated Testfile for 
# Source directory: /home/ws/src/bno08x_ros2_driver
# Build directory: /home/ws/build/bno08x_driver
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_i2c_mock "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/ws/build/bno08x_driver/test_results/bno08x_driver/test_i2c_mock.gtest.xml" "--package-name" "bno08x_driver" "--output-file" "/home/ws/build/bno08x_driver/ament_cmake_gmock/test_i2c_mock.txt" "--command" "/home/ws/build/bno08x_driver/test_i2c_mock" "--gtest_output=xml:/home/ws/build/bno08x_driver/test_results/bno08x_driver/test_i2c_mock.gtest.xml")
set_tests_properties(test_i2c_mock PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/ws/build/bno08x_driver/test_i2c_mock" TIMEOUT "60" WORKING_DIRECTORY "/home/ws/build/bno08x_driver" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gmock/cmake/ament_add_gmock_test.cmake;98;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;90;ament_add_gmock_test;/home/ws/src/bno08x_ros2_driver/CMakeLists.txt;76;ament_add_gmock;/home/ws/src/bno08x_ros2_driver/CMakeLists.txt;0;")
add_test(test_watchdog "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/ws/build/bno08x_driver/test_results/bno08x_driver/test_watchdog.gtest.xml" "--package-name" "bno08x_driver" "--output-file" "/home/ws/build/bno08x_driver/ament_cmake_gmock/test_watchdog.txt" "--command" "/home/ws/build/bno08x_driver/test_watchdog" "--gtest_output=xml:/home/ws/build/bno08x_driver/test_results/bno08x_driver/test_watchdog.gtest.xml")
set_tests_properties(test_watchdog PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/ws/build/bno08x_driver/test_watchdog" TIMEOUT "60" WORKING_DIRECTORY "/home/ws/build/bno08x_driver" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gmock/cmake/ament_add_gmock_test.cmake;98;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;90;ament_add_gmock_test;/home/ws/src/bno08x_ros2_driver/CMakeLists.txt;83;ament_add_gmock;/home/ws/src/bno08x_ros2_driver/CMakeLists.txt;0;")
subdirs("include/sh2")
subdirs("gmock")
subdirs("gtest")
