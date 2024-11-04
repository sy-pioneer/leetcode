import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zsy/sy_git/ROS2/CHAPT2_WS/install/demo_python_pkg'
