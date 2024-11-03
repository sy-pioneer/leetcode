from demo_python_pkg.person_node import PersonNode

class WriterNode(PersonNode):
    def __init__(self,name:str,age:int, book_name: str) -> None:
        print('WriterNode __init__ 方法被调用了')
        super().__init__(name,age) # 手动调用父类的init方法
        self.book = book_name

def main():
    node = WriterNode('小李',18,'时间简史')
    node.eat('预想肉松')