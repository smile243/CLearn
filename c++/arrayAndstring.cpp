#include <iostream>
#include <array>
#include <string>
//const std::string&常用写法，代表参数是值传递
void Print(const std::string& s){
    std::cout<<s<<std::endl;
}
int main(){
    std::array<int,5> numbers;  // Renamed from 'array' for clarity
    numbers.fill(2);  // More efficient than manual loop assignment
    
    for (const auto& num : numbers) {  // Range-based for loop
        std::cout << num << '\n';     // Use '\n' instead of endl
    }
    std::string s = "yjl";
    Print(s);
}