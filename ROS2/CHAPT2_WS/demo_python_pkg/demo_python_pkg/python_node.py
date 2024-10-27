import rclpy
from rclpy.node import Node    # rclpy下的node模块导入Node类

def main():
    rclpy.init()   #初始化工作，为接下来的通讯分配资源等
    node = Node('python_node')     #创建节点，节点名python_node的实例赋值给node变量
    node.get_logger().info('你好 python节点!')       #用节点node获取get_logger日志管理模块使用info打印日志
    node.get_logger().warn('你好 python节点!')       #WARN级别的日志
    rclpy.spin(node)               #运行节点node，spin实际会不断的循环，去检测node节点是否收到了新的话题、数据活等待的事件，直到节点被关闭。
    rclpy.shutdown                 #主动退出关闭节点