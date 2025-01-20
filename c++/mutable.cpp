#include <iostream>
class Entity{
    private:
    int x;
    //const函数中无法修改成员变量，mutable能够跳出这个限制
    mutable int y;
    public:
    void getX() const{
        y=0;
        std::cout<<x<<std::endl;
    }
};
int main(){
    Entity e;
    e.getX();
    int x=8;
    //lambda [=]指传递[&]引用传递
    auto f = [&]() mutable{
        x++;
        std::cout<<x<<std::endl;
    };
    f();
    std::cout<<x<<std::endl;
}