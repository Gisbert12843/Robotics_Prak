import launch
from launch import LaunchDescription
import launch_ros.actions

from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            namespace='turtlesim1', package='turtlesim',
            executable='turtlesim_node', output='screen'),
        launch.actions.TimerAction(
            period=6.0,
            actions=[
                launch_ros.actions.Node(
                    package='my_package',
                    executable='run_circle_command',
                    name='run_circle_command',
                    output='screen'
                )
            ]
        ),
    ])



