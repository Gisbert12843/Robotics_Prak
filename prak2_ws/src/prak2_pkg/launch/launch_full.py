from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
from launch.substitutions import LaunchConfiguration
import launch_ros.actions


def generate_launch_description():
    return LaunchDescription(
        [
            ExecuteProcess(
                cmd=["ros2", "launch", "webots_spot", "spot_launch.py"], output="screen"
            ),
            # ExecuteProcess(cmd=["rviz2"], output="screen"),
        ]
    )
