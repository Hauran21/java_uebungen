from rclpy.node import Node
import rclpy

from sensor_msgs.msg import Image

from std_srvs.srv import Trigger

from sensor_msgs.msg import Image

import cv2
from cv_bridge import CvBridge

import serial

from cameractrl.openmv.pi_app_cmd import send_file_to_openmv, receive_image_from_openmv
from cameractrl_interfaces.srv import TriggerSnapshot

class OpenMVNode(Node):
    def __init__(self, node_name: str):
        super().__init__(node_name)

        self.declare_parameter('uart_name', '/dev/ttyACM0')
        self.declare_parameter('baudrate', 256000)
        self.declare_parameter('framerate', 0.1)

        self._uart_name = self.get_parameter('uart_name').get_parameter_value().string_value
        self._baudrate = self.get_parameter('baudrate').get_parameter_value().integer_value
        self._framerate = self.get_parameter('framerate').get_parameter_value().double_value

        self.get_logger().info(f"Device: {self._uart_name}, Baudrate: {self._baudrate}, Framerate: {self._framerate}")
        
        self._ser = serial.Serial(self._uart_name, self._baudrate, timeout=2)

        self._pub_image_raw = self.create_publisher(Image, '~/image_raw', 10)
        self._srv_trigger_snapshot = self.create_service(Trigger, '~/trigger_snapshot', self._srv_trigger_snapshot_cb)

        self._timer_pub_image_raw = self.create_timer(1.0/self._framerate, self._timer_pub_image_raw_cb)
        self._cv_bridge = CvBridge()

    def _timer_pub_image_raw_cb(self):
        img = receive_image_from_openmv(self._ser)
        if img is not None:
            self._pub_image_raw.publish(self._cv_bridge.cv2_to_imgmsg(img, "bgr8"))

    def _srv_trigger_snapshot_cb(self, request: Trigger.Request, response: Trigger.Response):
        response.success = True
        self._timer_pub_image_raw_cb()
        response.message = "Snapshot triggered"
        return response

    def destroy_node(self):
        if self._ser.is_open:
            self._ser.close()
            self.get_logger().info("OpenMV Serial port closed.")
        return super().destroy_node()

def main():
    node = None
    try:
        rclpy.init()
        try:
            node = OpenMVNode("openmv")
        except Exception as e:
            print(f"Fehler beim Erstellen des Nodes: {e}")
            return

        rclpy.spin(node)

    except KeyboardInterrupt:
        print("Sie haben STRG+C gedrückt!")

    finally:
        if node is not None:
            if rclpy.ok():
                node.get_logger().info(f"Node {node.get_name()} wird beendet!")
            node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == "__main__":
    main()