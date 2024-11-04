import rclpy
from rclpy.node import Node

class PersonNode(Node):
    def __init__(self, node_name:str,name_value: str,age_value: int) -> None:
        print('PersonNode __init__ 方法被调用了，添加了两个属性')
        super().__init__(node_name)
        self.name = name_value
        self.age = age_value

    def eat(self,food_name: str):
        """
        方法：吃东西
        :food_name 食物名字
        """
        # print(f"{self.name},{self.age}岁,爱吃{food_name}")
        self.get_logger().info(f"{self.name},{self.age}岁,爱吃{food_name}")
def main():
    rclpy.init()
    node = PersonNode('zhangsan_node','法外狂徒张三', 18) # 类的对象
    # node1 = PersonNode('小王',89)
    node.eat('鱼香肉丝')
    # node1.eat('西红柿')
    rclpy.spin(node)
    rclpy.shutdown()