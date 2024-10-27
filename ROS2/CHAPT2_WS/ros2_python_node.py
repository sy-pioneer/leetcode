import rclpy
from rclpy.node import Node    # rclpy下的node模块导入Node类

def main():
    rclpy.init()   #初始化工作，为接下来的通讯分配资源等
    node = Node('python_node')     #创建节点，节点名python_node的实例赋值给node变量
    node.get_logger().info('你好 python节点!')       #用节点node获取get_logger日志管理模块
    rclpy.spin(node)               #运行节点
    rclpy.shutdown                 #主动退出关闭节点

if __name__=='__main__':
    main()