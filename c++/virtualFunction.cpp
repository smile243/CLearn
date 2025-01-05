#include <iostream>
//允许覆盖子类方法,但是需要消耗额外的内存来存储v-table
class Entity{
    public:
    float X,Y;
    void Move(float xa,float ya){
        X+=xa;
        Y+=ya;
    }
    //虚函数通过动态映射
    virtual std::string GetName(){
        return "hello";
    }
};
class Player :public Entity
{
    private:
        std::string name;
    public:
        /**
         * 下面的:name(n)写法
         * initializer list
         * const数据成员必须使用这种方式初始化 &引用成员对象也必须这样
         * 用法参考https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/
         */
        Player(const std::string& n):name(n){}
            //c++11引入
        std::string GetName() override{return name;}

};

void PrintName(Entity* entity){
    std::cout<<entity->GetName()<<std::endl;
}
int main(){
    Entity* e=new Entity();
    PrintName(e);
    Player* p=new Player("yjl");
    PrintName(p);
}