import rclpy
from rclpy.node import Node

from pkg_interfaces.msg import Num                        # CHANGE


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(Num, 'topic', self.listener_callback,10) #CHANGE
        self.subscription

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%d"' % msg.num)  # CHANGE


def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()