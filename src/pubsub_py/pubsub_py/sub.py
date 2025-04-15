import rclpy #Module ROS2 in py
from rclpy.node import Node
from std_msgs.msg import String

class Subs(Node): #Create SubClass from Node Class
    def __init__(self):#Constructor
        super().__init__('minimal_subscriber')# call constructor node class
        self.subscription = self.create_subscription(String,'topic',self.listener_callback,10)#attr for the rule of the subs : type = string, topic name ='topic', callback = method listener callback
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):#Method for the callback args
        self.get_logger().info('I heard: "%s"' % msg.data) #show the msg in terminal

def main(args=None):
    rclpy.init(args=args)#init ROS2
    minimal_subscriber = Subs()#Create object from Class SUbs
    rclpy.spin(minimal_subscriber)#Execute the object untill kill
    minimal_subscriber.destroy_node()#Clear the object
    rclpy.shutdown()#Shutdown the ROS2

if __name__ == '__main__':
    main()