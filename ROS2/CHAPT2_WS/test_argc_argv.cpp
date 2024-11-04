#include "iostream"
int main(int argc, char** argv)
{
    std::cout << "参数数量=" << argc << std::endl; //argc表示参数数量，
    std::cout << "程序名字=" << argv[0] << std::endl; //argv表示输入参数，参数名字，argv[0]第一个参数默认是程序的名字
    // g++ 文件名；编译之后会生成a.out的可执行文件，这时候在终端中执行./a.out，./a.out会作为argv的第一个参数，argc的值为1
    //执行./a.out --help；这时argc表示参数数量的值为2，./a.out作为第一个参数，--help作为第二个参数输入
    std::string arg1 = argv[1];
    if (arg1 == "--help"){
        std::cout << "这里是程序帮助，但是这个程序什么用都没有" << std::endl;
    }
    return 0;
}