cmake_minimum_required(VERSION 3.5)
project(docker_ros_example)

set(${PROJECT_NAME}_COMPILE_OPTIONS "-Wall;-Wextra;-Wpedantic;")
set(${PROJECT_NAME}_C_STANDARD "11")
set(${PROJECT_NAME}_CXX_STANDARD "17")

###############
##### ROS #####
###############

# ROS 2

if("$ENV{ROS_VERSION}" STREQUAL "2")

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(docker_ros_example src/main_ros2.cpp)

ament_target_dependencies(docker_ros_example
  rclcpp
  std_msgs
)

target_include_directories(docker_ros_example PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

target_compile_options(docker_ros_example PRIVATE
  ${${PROJECT_NAME}_COMPILE_OPTIONS}
)

set_target_properties(docker_ros_example PROPERTIES
  C_STANDARD ${${PROJECT_NAME}_C_STANDARD}
  CXX_STANDARD ${${PROJECT_NAME}_CXX_STANDARD}
)

install(
  TARGETS docker_ros_example
  DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
  FILES_MATCHING
    PATTERN "*.launch.py"
    PATTERN "*.launch.xml"
    PATTERN "*.launch.yaml"
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

###############
##### ROS #####
###############

# ROS 1

elseif("$ENV{ROS_VERSION}" STREQUAL "1")

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include
  # LIBRARIES ${PROJECT_NAME}
  CATKIN_DEPENDS
    roscpp
    std_msgs
  # DEPENDS system_lib
)

add_executable(docker_ros_example src/main_ros1.cpp)

add_dependencies(docker_ros_example
  ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS}
)

target_link_libraries(docker_ros_example
  ${catkin_LIBRARIES}
)

target_include_directories(docker_ros_example PUBLIC
  ${catkin_INCLUDE_DIRS}
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

target_compile_options(docker_ros_example PRIVATE
  ${${PROJECT_NAME}_COMPILE_OPTIONS}
)

set_target_properties(docker_ros_example PROPERTIES
  C_STANDARD ${${PROJECT_NAME}_C_STANDARD}
  CXX_STANDARD ${${PROJECT_NAME}_CXX_STANDARD}
)

install(
  TARGETS docker_ros_example
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(
  DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING
    PATTERN "*.h"
    PATTERN "*.hpp"
)

install(
  DIRECTORY launch
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
  FILES_MATCHING
    PATTERN "*.launch"
)

else()

message(FATAL_ERROR "Unsupported ROS version: $ENV{ROS_VERSION}."
                    "Please set the ROS_VERSION environment variable to 1 or 2.")

endif()
