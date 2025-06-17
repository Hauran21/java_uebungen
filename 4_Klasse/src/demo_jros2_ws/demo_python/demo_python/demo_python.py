from rclpy.node import Node
import rclpy
from std_srvs.srv import Trigger, SetBool
from std_msgs.msg import Float32MultiArray, Int8, UInt8MultiArray
from random import random
from math import pi
from demo_interfaces.srv import DemoMotor

#Demo CLI-Commands:
# colcon build
# source install/setup.bash

# ros2 run demo_python demo_python_node
# ros2 service call /ligth_left/set std_srvs/srv/SetBool "{data: true}"
# ros2 service call /ligth_right/set std_srvs/srv/SetBool "{data: false}"
# ros2 service call /motor1/set demo_interfaces/srv/DemoMotor "{enable: false}"
# ros2 topic pub -1 /cmd_drop std_msgs/Int8 "data: 1"
# ros2 topic echo /rotation
# ros2 topic list
# ros2 service list
# ros2 service list /ligth_left/set
# ros2 service list /ligth_right/set



class DemoPython(Node):
    def __init__(self, node_name: str):
        super().__init__(node_name)
        self.get_logger().info(f"Node {self.get_name()} wurde erstellt!")
        self.get_logger().info("Dies ist eine Beispiel-Node in Python.")
        self.get_logger().info("Sie können STRG+C drücken, um den Node zu beenden.")

        #Standard-Services Demo
        #Fake Light Sensor -> Dummy Light Data
        self.create_service(SetBool, "light_left/set", self._srv_light_left_set_cb)
        self.create_service(SetBool, "light_right/set", self._srv_light_right_set_cb)
        self.create_service(Trigger, "light_left/trigger", self._srv_light_left_trigger_cb)
        
        self.create_subscription(UInt8MultiArray, "ledctrl", self._sub_ledctrl_cb, 10)

        #Individual-Services Demo
        #Fake Motor -> Enable/Disable Motor
        self.create_service(DemoMotor, "motor1/set", self._srv_motor1_set_cb)

        #Standard-Publisher Demo
        #Fake IMU-Sensort -> Dummy Rotation Data
        self._imu_rotation = Float32MultiArray()
        self._pub_rotation = self.create_publisher(Float32MultiArray, "rotation", 10)
        self.create_timer(0.1, self._timer_imu_rotation_cb)

        #Standard-Subscriber Demo
        #Fake Drop Sensor -> Dummy Drop Data
        self.create_subscription(Int8, "cmd_drop", self._sub_cmd_drop_cb, 10)
        self.get_logger().info("Node initialisiert und bereit!")

    def _sub_cmd_drop_cb(self, msg: Int8):
        self.get_logger().info(f"Nachricht Für Dropper empfangen: {msg.data}")

    def _sub_ledctrl_cb(self, msg: UInt8MultiArray):
        self.get_logger().info(f"Nachricht für LightCtrl empfangen: {msg.data}")

    def _srv_light_left_set_cb(self, request:SetBool.Request, response:SetBool.Response):
        self.get_logger().info(f"Anfrage an den Dienst 'ligth_left/set' erhalten: {request.data}")
        response.success = True
        response.message = "Licht links gesetzt!"
        return response
    
    def _srv_light_right_set_cb(self, request:SetBool.Request, response:SetBool.Response):
        self.get_logger().info(f"Anfrage an den Dienst 'ligth_right/set' erhalten: {request.data}")
        response.success = True
        response.message = "Licht rechts gesetzt!"
        return response
    
    def _srv_light_left_trigger_cb(self, request:Trigger.Request, response:Trigger.Response):
        self.get_logger().info(f"Anfrage an den Dienst 'ligth_left/trigger' erhalten")
        response.success = True
        response.message = "Licht links getriggert!"
        return response

    def _srv_motor1_set_cb(self, request:DemoMotor.Request, response:DemoMotor.Response):
        self.get_logger().info(f"Anfrage an den Dienst 'motor1/set' erhalten: {request.enable}")
        response.status = True
        return response
    
    def _timer_imu_rotation_cb(self):
        self._imu_rotation.data = [random() * 2 * pi - pi for i in range(3)]
        self._pub_rotation.publish(self._imu_rotation)
        #self.get_logger().info(f"IMU-Daten veröffentlicht: {self._imu_rotation.data}")

    def destroy_node(self):
        return super().destroy_node()

def main():
    node = None
    try:
        rclpy.init()
        try:
            node = DemoPython("demo_python_node")
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