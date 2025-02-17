#include <vector>
#include <string>
#include <iostream>

class Person
{
private:
    std::string _name;
    int _age;
public:
    Person(const std::string &name,int age):_name(name),_age(age)
{
    std::cout<<"constructor"<<std::endl;
}

~Person()
{
     std::cout<<"del"<<std::endl;
}
};

/**
 * 初始化时要指定容量，不然会有多余自动扩容带来的复制操作
 * push_back会调用一次构造函数+一次移动构造函数；emplace_back只调用一次构造函数
*/
int main()
{
    std::vector<Person> vector;
    vector.reserve(3);
    vector.emplace_back(Person("zs",12));
    vector.emplace_back(Person("ls",13));
    vector.emplace_back(Person("ww",14));
}