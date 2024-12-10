#include<iostream>
// 2.声明：告诉编译器有Log这个函数
// 要将定义纳入进来，就得first.cpp和log.cpp同时编译
void Log(const char* message);

int main()
{
    //1.运算符相当于函数
    //可看作std::cout.print("hello world").print(std::endl)  但是不能这么写！！
    //std::cout<<"hello world"<<std::endl;
    Log("hello world");
    return 0;
}
