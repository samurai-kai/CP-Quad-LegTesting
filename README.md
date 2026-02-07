# Switch-2 Quadruped — Single-Leg Testing

Switch-2 is the Cal Poly Legged Robotics Group’s second-generation quadruped research
platform. It is a 12-degree-of-freedom (12-DOF) system featuring a full 3-DOF leg
architecture designed to support modern legged robotics research, including
impedance control, whole-body motion, and future learning-based locomotion.

This repository contains the **ROS 2 software stack used for simulation and
single-leg (SL) hardware testing** of the Switch-2 platform. Due to current power
distribution limitations, testing is performed on an individual leg to validate
mechanical design, kinematics, control structure, and electrical loading prior to
full quadruped operation.

Additional technical documentation and design rationale can be found in the
associated thesis and project documentation.

---

## System Overview

- **Robot:** Switch-2 (12-DOF quadruped)
- **Actuation:** 3-DOF per leg (hip roll, hip pitch, knee pitch)
- **Compute:** NVIDIA Jetson AGX Orin
- **Middleware:** ROS 2 Jazzy
- **Control:** `ros2_control`
- **Simulation:** Gazebo
- **Hardware Testing:** Single-leg (bench-mounted)

# Installation
This system is built to run on an NVIDIA Jetson Orin AGX Nano, inside of a Docker container. It runs on ROS2 Jazzy, and includes heavy use of ros2_control.

## Dockerfile Setup
First, clone this repository to your desired workspace. You will need to spin up a docker container using the included Dockerfile; this takes a while. There is also a devcontainer.json file included for use with VSCode's remote development extension. 

## First-Time Setup
After the Docker container has been created, source /opt/ros/jazzy/setup.bash. Next, colcon_build the project. Lastly, source install/setup.bash to source the project files, and the system should be ready to run.

# Use
## Running in simulation
Currently, Gazebo is the only simulation environment supported within this project. To run a simulation, launch the file `gazebo_sim.launch.py` from the `rl12dof_urdf_description` folder. 

### Single-Leg Hardware Startup Procedure

All hardware experiments follow a fixed startup sequence to ensure safe and
repeatable operation of the single-leg test stand.

1. Enable CAN communication on the Jetson.
2. Enable the motors on the CAN bus within the ROS 2 environment with `ros2 run quadruped_bringup real.launch.py`
3. Spawn the joint state broadcaster and the zeroing controller with `source zerocontroller.sh`
4. Allow the zeroing controller to initialize joint references, then deactivate it with `source CLdeactivatezero.sh`
5. Spawn the static joints controller with `source staticcontrol.sh`
6. Launch Foxglove for visualization and user interaction with `source CLfoxglove.sh`
7. Execute the desired test by publishing commands to the static joints controller.
