
// 2.声明：告诉编译器有Log这个函数
// 要将定义纳入进来，就得first.cpp和log.cpp同时编译
//void Log(const char* message);
//头文件是将其他地方的cpp文件copy该文件中使用,用来解决多个函数声明复制过来过于麻烦的问题 
//即#include "log.h"用来代替void Log(const char* message);这一行代码的
/**
 * ""和<>的区别是 ""是相对路径 <>是绝对路径
 * iosteam这么简洁是因为c++标准库的编写者想和c标准库区分开来，c标准库的头文件通常是XXX.h
 */
#include "log.cpp"

int main()
{
    //1.运算符相当于函数
    //可看作std::cout.print("hello world").print(std::endl)  但是不能这么写！！
    //std::cout<<"hello world"<<std::endl;
    Log("hello world");
    int a = 8;
    return 0;
}
