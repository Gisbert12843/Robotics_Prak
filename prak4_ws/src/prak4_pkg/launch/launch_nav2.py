import os
import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, ThisLaunchFileDir
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.actions import ExecuteProcess
import launch_ros.actions


def generate_launch_description():
    return LaunchDescription(
        [
            # slam
            ExecuteProcess(
                cmd=["ros2", "launch", "webots_spot", "slam_launch.py"], output="screen"
            ),
            # Nav2
            ExecuteProcess(
                cmd=["ros2", "launch", "webots_spot", "nav_launch.py"],
                output="screen",
            ),
        ]
    )
