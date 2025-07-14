#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

#include "docker_ros_example/example.h"

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Hello World from ROS 2");

  docker_ros_example::add(1, 1);
  docker_ros_example::minus(1, 1);
  docker_ros_example::div(1, 1);
  docker_ros_example::mult(1, 1);

  return 0;
}
