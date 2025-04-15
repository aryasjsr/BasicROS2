from example_interfaces.srv import AddTwoInts #import the AddTwoInts dari package interface : example_interfaces which has request: A,B and response :Sum
import rclpy
from rclpy.node import Node


class MinimalService(Node):
    def __init__(self):#Constructor
        super().__init__('minimal_service')#call contructor node class
        self.srv = self.create_service(AddTwoInts, 'add_two_ints', self.add_two_ints_callback) #create service (type:AddTwoInts, callback:self.add_two_ints_callback)

    def add_two_ints_callback(self, request, response):#Method untuk callback menangani penjumlahan dari request
        response.sum = request.a + request.b #penjumlahan
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))#show the result
        return response

def main():
    rclpy.init()
    minimal_service = MinimalService()
    rclpy.spin(minimal_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()