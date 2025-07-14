#include <ros/ros.h>
#include <std_msgs/String.h>

#include <iostream>

#include "docker_ros_example/example.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "docker_ros_example");

  ROS_INFO("Hello World from ROS 1");

  docker_ros_example::add(1, 1);
  docker_ros_example::minus(1, 1);
  docker_ros_example::div(1, 1);
  docker_ros_example::mult(1, 1);

  return 0;
}
