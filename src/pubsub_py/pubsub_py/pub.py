import rclpy #Module ROS2 in py
from rclpy.node import Node 
from std_msgs.msg import String #Module to create msg

class Pub(Node): #SubClass dari Class Node

    def __init__(self): #Constructor
        super().__init__('minimal_publisher')# call constructor node class
        self.publisher_ = self.create_publisher(String, 'topic', 10) #attr for the rule of the pub: 'topic'= name of the topic , String = msg_type, 10 = queue msg
        timer_period = 0.5  # attr time for delay publish (seconds)
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0 #attr for send the number of the msg

    def timer_callback(self):#Method
        msg = String() #Create object from string class
        msg.data = 'Hello World: %d' % self.i #Create inside of the message
        self.publisher_.publish(msg) #publish the msg
        self.get_logger().info('Publishing: "%s"' % msg.data) #show the msg in terminal
        self.i += 1 #increment the number of the msg

def main(args=None):
    rclpy.init(args=args) #init ROS2
    minimal_publisher = Pub()#Create object from Class Pub
    rclpy.spin(minimal_publisher)#Execute the object untill kill
    minimal_publisher.destroy_node()#Clear the object
    rclpy.shutdown()#Shutdown the ROS2

if __name__ == '__main__':
    main()