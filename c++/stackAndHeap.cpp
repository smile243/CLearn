#include <iostream>
#include <string>

//stack和heap的区别是heap使用new关键字来分配内存
int main()
{
    //stack
    int value = 5;
    int arr[5];
    //heap
    int* hvalue = new int;
    *hvalue = 5;
    int* hArr = new int[5];
    delete hvalue;
    delete hArr;
    return 0;
}