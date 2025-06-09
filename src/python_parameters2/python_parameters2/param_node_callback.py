import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from rclpy.parameter import Parameter
from rcl_interfaces.msg import SetParametersResult

class TestParams(Node):

    def __init__(self):
        super().__init__('test_param')
        
        self.publisher_ = self.create_publisher(Int64, 'number', 10)
        self.declare_parameter("number", 2)
        self.declare_parameter("publish_period", 1.0)
        
        self.add_on_set_parameters_callback(self.parameters_callback)
        
        self.number_ = self.get_parameter("number").value
        self.timer_period_ = self.get_parameter("publish_period").value
        self.number_timer_ = self.create_timer(self.timer_period_, self.publish_number)
            
    def publish_number(self):
        msg = Int64()
        msg.data = self.number_
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        
    def parameters_callback(self, params: list[Parameter]):
        for param in params:
            if param.name == "number":
                self.number_ = param.value
        return SetParametersResult(successful=True)

def main(args=None):
    
    rclpy.init(args=args)
    test_param = TestParams()
    rclpy.spin(test_param)
    test_param.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()