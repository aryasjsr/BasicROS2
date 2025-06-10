from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    ld = LaunchDescription()

    param_config = os.path.join(
        get_package_share_directory("robot_bringup"), 
        "config", "param_node_pub.yaml")

    publisher1 = Node(
        package="pubsub_py",
        executable="pub",
        namespace="/abc",
        name="pub1",
        remappings=[("/topic", "/my_topic")]
    )

    subscriber = Node(
        package="pubsub_py",
        executable="sub",
        namespace="/abc",
        name="sub1",
        remappings=[("/topic", "/my_topic")]
    )

    ld.add_action(publisher1)
    ld.add_action(subscriber)

    return ld