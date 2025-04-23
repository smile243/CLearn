#include <iostream>
#include <string>
//std::string可以直接输出
void Print(const std::string& s){
    std::cout<<s<<std::endl;
}
int main(){
    std::string s {"yjl"};
    Print(s);
}