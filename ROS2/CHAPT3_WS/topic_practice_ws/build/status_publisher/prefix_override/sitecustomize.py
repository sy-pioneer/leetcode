import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zsy/sy_git/ROS2/CHAPT3_WS/topic_practice_ws/install/status_publisher'
