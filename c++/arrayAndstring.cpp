#include <iostream>
#include <array>
#include <string>
//const std::string&常用写法，代表参数是值传递
void Print(const std::string& s){
    std::cout<<s<<std::endl;
}
int main(){
    std::array<int,5> array;
    for (int i = 0; i < array.size(); i++)
    {
        array[i]=2;
        std::cout<<array[i]<<std::endl;
    }
    std::string s = "yjl";
    Print(s);
}