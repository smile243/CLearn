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
    Person(const Person & p):_name(p._name),_age(p._age){
        std::cout<<"copied"<<std::endl;
    }

    ~Person()
    {
        std::cout<<"del"<<std::endl;
    }
};

/**
 * 初始化时要指定容量，不然会有多余自动扩容带来的复制操作
 * push_back会调用一次构造函数+一次移动构造函数；emplace_back只调用一次构造函数
 * vector扩容因子是1.5
*/
int main()
{
    std::vector<Person> vector;
    vector.reserve(3);
    //push 是函数内部构造然后复制到vector中
    // vector.push_back(Person("zs",12));
    // vector.push_back(Person("ls",13));
    // vector.push_back(Person("ww",14));
    //emplace_back直接在vector中构造，不存在复制
    vector.emplace_back("zs",12);
    vector.emplace_back("ls",13);
    vector.emplace_back("ww",14);
    // for(const Person& p:vector){
    //     std::cout<<"123"<<std::endl;
    // }
}