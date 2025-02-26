#include <iostream>
//复用命名空间
using String = std::string;
class Printable{
    /**
     * vitural =0代表该函数是纯虚函数，相当于interface
     */
public:
    virtual String GetName()=0;
};
class Entity :public Printable
{
public:
    float X, Y;
    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
    // 允许覆盖子类方法,虚函数通过动态映射,但是需要消耗额外的内存来存储v-table
     virtual String GetName(){
         return "hello";
     }
};
class Player : public Entity
{
private:
    String name;

public:
    /**
     * 下面的:name(n)写法
     * initializer list
     * const数据成员必须使用这种方式初始化 &引用成员对象也必须这样
     * 用法参考https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/
     */
    Player(const String &n) : name(n) {}
    // c++11引入
    String GetName() override { return name; }
};

void PrintName(Printable* entity)
{
    std::cout << entity->GetName() << std::endl;
}
int main()
{
    Entity *e = new Entity();
    PrintName(e);
    Player *p = new Player("yjl");
    PrintName(p);
}