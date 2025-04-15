import sys #module for baca  command terminal
from example_interfaces.srv import AddTwoInts #import the AddTwoInts dari package interface : example_interfaces which has request: A,B and response :Sum
import rclpy
from rclpy.node import Node

class MinimalClientAsync(Node): #Subclass dari Node
    def __init__(self):#Constructor
        super().__init__('minimal_client_async')#Call constructor Node Class
        self.cli = self.create_client(AddTwoInts, 'add_two_ints')#Create cleint untuk service dgn nama= "add_two_ints", type data = AddTwoInts
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')#Waiting service avail or not
        self.req = AddTwoInts.Request() #make an object Request untuk store data a and b

    def send_request(self, a, b):#method untuk mengirim requst ke client
        self.req.a = a #store data a
        self.req.b = b #store data b
        self.future = self.cli.call_async(self.req)#hasil panggilan disimpan dengan memanggil secara asinkron
        rclpy.spin_until_future_complete(self, self.future) #ROS terus berjalan sampai ada response
        return self.future.result()#mengembalikan hasil panggilan

def main():
    rclpy.init()
    minimal_client = MinimalClientAsync()#Create object dari MinimalClientAsync Class
    response = minimal_client.send_request(int(sys.argv[1]), int(sys.argv[2])) #get the num from cmd terminal
    minimal_client.get_logger().info(
        'Result of add_two_ints: for %d + %d = %d' %
        (int(sys.argv[1]), int(sys.argv[2]), response.sum))#to show the result
    minimal_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()