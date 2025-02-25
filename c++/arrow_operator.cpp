#include <iostream>
class Entity{
public:
    
    void Print()const{
        std::cout<<"Hello Entity"<<std::endl;
    }
};

class RAIIPtr 
{
private:
    Entity* m_Obj;
public:
    RAIIPtr(Entity* entity):m_Obj(entity){

    }
    ~RAIIPtr(){
        delete m_Obj;
    }
    /**
     * 箭头函数一般定义为const，因为箭头函数是获取成员变量，不会改变
     * 当我们重载箭头时，可以改变的是箭头从哪个对象当中获取成员，而箭头获取成员这一事实则永远不变
     */
    const Entity* operator->()const
    {
        return m_Obj;
    }
};

struct Vec{
    int x,y,z;
};

int main(){
    //1
    Entity e;
    e.Print();
    Entity *ptr = &e;
    ptr->Print();
    //当ptr属于内置的指针类型，ptr只是一个指针，也就是一个数值，不是对象，无法调用方法
    (*ptr).Print();

    //2
    const RAIIPtr e2 = new Entity();
    e2->Print();
    //3 获取偏移量 win和mac不太一样 win只要用int转换，mac要int64_t 可能是因为编译器
    int offset = (int64_t)&((Vec*)nullptr)->y;
    std::cout<<offset<<std::endl;
}