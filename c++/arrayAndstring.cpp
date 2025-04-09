#include <iostream>
#include <array>
#include <string>
//std::string可以直接输出
void Print(const std::string& s){
    std::cout<<s<<std::endl;
}
int main(){
    std::array<int,5> numbers; 
    numbers.fill(2);
    for (const auto& num : numbers) {
        std::cout << num << '\n';     
    }
    std::string s = "yjl";
    Print(s);
}