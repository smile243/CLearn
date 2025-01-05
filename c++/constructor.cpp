#include <iostream>
class Entity{
    public:
    float x,y;
    // Entity(){
    //     x = 0.0f;
    //     y = 0.0f;
    // }
    //避免外部异常创建对象，因为c++基本类型没有默认值
    Entity()=delete;
    Entity(float x,float y):x(x),y(y){
        std::cout<<"Constructor called"<<std::endl;
    }
    void Print(){
        std::cout<<"x: "<<x<<", y: "<<y<<std::endl;
    }
    ~Entity(){
        //析构函数通常用来销毁构造函数初始化的某些东西
        std::cout<<"Destructor called"<<std::endl;
    }
};
int main(){
    Entity e(10.0f,20.0f);
    e.Print();
    //主动调用析构函数
    e.~Entity();
    return 0;
}
