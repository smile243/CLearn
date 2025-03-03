#include <iostream>
#include <typeinfo>
/**
 * 运行时类型映射
 * ./a.out | c++filt -t 因为类型映射会带有数字，是类名的长度
 */
class Person {
public:
    virtual ~Person() = default;
};

class Employee : public Person {};

int main() {
    Person person;
    Employee employee;
    Person* ptr = &employee;
    Person& ref = employee;
    
    
    std::cout << typeid(person).name()<< std::endl;  
    std::cout << typeid(employee).name()<< std::endl;  
    std::cout << typeid(ptr).name()<< std::endl;  
    std::cout << typeid(*ptr).name()<< std::endl;  
                             
    std::cout << typeid(ref).name()<< std::endl;  

    Person* p = nullptr;
    
    try {
        typeid(*p); 
    } catch (...) { }

    Person& p_ref = *p; 
    typeid(p_ref);      
}