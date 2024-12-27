 /**
 * 同时编译多个文件时 static是包私有的，没有加static是全局共享
 * 2.static的成员变量必须在类外初始化，static修饰的变量先于对象存在，所以static修饰的变量要在类外初始化
 */
#include <iostream>
extern int s_Variable;

struct Object{
    static int x,y;
    void Print(){
        std::cout<<x<<","<<y<<std::endl;
    }
};
//2.
int Object::x;
int Object::y;
int main(){
    std::cout<<s_Variable<<std::endl;
    Object o1;
    o1.x=2;
    o1.y=3;
    Object o2;
    o2.x = 5;
    o2.y = 8;
    o1.Print();
    o2.Print();
}