#include "rclcpp/rclcpp.hpp"

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);//初始化传入参数argc,argv;
    //作用是ros2运行程序这个的时候，可执行程序后面加一些参数(修改节点的名字），会被rclcpp读取和解析
    auto node = std::make_shared<rclcpp::Node>("cpp_node");
    RCLCPP_INFO(node->get_logger(), "你好C++节点！");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}