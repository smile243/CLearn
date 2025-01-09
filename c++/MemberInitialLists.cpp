#include <iostream>
class Example{
    private:
        int e;
    public:
        Example(){
            std::cout<<"default constructor"<<std::endl;
        }
        Example(int x){
            e=x;
            std::cout<<"parameter constructor"<<std::endl;
        }
};
class Entity
{
private:
    int x, y;
    Example e;
public:
    // 构造函数体内初始化参数的话，会调用两次构造函数(//1处)，而initiallist就不会(//2处)
    Entity(): x(0),y(0),e(Example(1))//2 e(Example(1))可以简写为e(1)
    {
        //1 e= Example(1);
    }
    Entity(int a, int b)
    {
        x = a;
        y = b;
    }

    void get()
    {
        std::cout << x << " " << y << std::endl;
    }
};

int main()
{
    Entity e;
    e.get();
    Entity e2(1,2);
    e2.get();
}