#include<memory>
#include <iostream>

class Entity{
    public:
    Entity(){
        std::cout<<"created"<<std::endl;
    }
    ~Entity(){
        std::cout<<"destroyed"<<std::endl;
    }
};


int main(){
    {
        std::unique_ptr<Entity> entity= std::make_unique<Entity>();
    }
    //智能指针中，计数器为0时才会销毁
    std::shared_ptr<Entity> shared;
    {
        //此创建法比较安全
       std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
       shared =sharedEntity;
    }
    return 0;
}