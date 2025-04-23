//宏用法
#include <iostream>
#define DEBUG 0
#if DEBUG==1
#define log(x) std::cout<<x<<std::endl
#else
#define log(x)
#endif
int main(){
    log("hello");
    return 0;
}