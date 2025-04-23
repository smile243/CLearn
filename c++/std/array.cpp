// array 
//比对：原生c-array std::vector 这三个都是内存连续，允许随机访问
#include <array>
#include <iostream>
int main()
{
    int array[5];
    std::array<int, 5> arr;
    arr[0] = 1;
    arr[1] = 2;
    array[0] = 1;
    array[1] = 2;
    std::cout<<array[4]<<std::endl;
    std::cout<<arr[5]<<std::endl;
    return 0;
}