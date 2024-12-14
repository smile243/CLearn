/**
 * 指针只是一个内存的地址(整数)，类型无关紧要,类型主要用来告诉计算机存储的数据的大小byte
 * 空指针 nullptr
 */
#include <iostream>
int main(){
    int var = 8;
    int* ptr = &var;
    *ptr = 10;
    std::cout<<var<<std::endl;
    char* buffer = new char[8];
    //填充指针 指针头位置 填充的内容 填充的长度
    memset(buffer,0,8);
    //指针的地址
    char** buffetPtr = &buffer;
    std::cout<<buffetPtr<<std::endl;
    delete[] buffer;
}