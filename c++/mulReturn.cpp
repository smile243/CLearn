#include <iostream>
#include <string>

//多返回值
//struct在栈上创建
struct Student{
    int age;
    std::string name;
};

static Student create(){
    Student std;
    std.age = 12;
    std.name = "zs";
    return std;
}

int main(){
    Student student = create();
    std::cout<<student.age<<std::endl;
    return 0;
}