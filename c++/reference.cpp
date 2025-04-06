#include <iostream>
#define LOG(x) std::cout<<x<<std::endl
// 1.引用不会创建变量 
// 2.引用和指针一样，能够传递变量的地址,是个语法糖而已 
// 3.引用如果想变更，要通过指针，不能直接变更引用
void increment(int& x){
    x++;
}
void incrementByPointer(int* x){
    (*x)++;
}
int main(){
    int var = 8;
    int& ref = var;
    ref = 2;
    increment(var);
    incrementByPointer(&var);
    int var2 = 77;
    //会造成var指向var2的内存空间
    // ref = var2;
    LOG(var);
    LOG(var2);
}