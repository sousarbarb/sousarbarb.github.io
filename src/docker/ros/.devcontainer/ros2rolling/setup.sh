#!/bin/bash
cp .devcontainer/ros2rolling/c_cpp_properties.json .vscode/c_cpp_properties.json

source /opt/ros/rolling/setup.bash

cd /home/ros_ws/
colcon build --cmake-args -DCMAKE_BUILD_TYPE=Release --event-handlers status+ console_cohesion+ console_direct+ console_start_end+ console_stderr+
source install/setup.bash
