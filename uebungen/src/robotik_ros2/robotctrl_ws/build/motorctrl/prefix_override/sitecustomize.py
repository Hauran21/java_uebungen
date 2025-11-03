import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/robot/work/java_uebungen/uebungen/src/robotik_ros2/robotctrl_ws/install/motorctrl'
