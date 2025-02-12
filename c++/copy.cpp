#include <iostream>
/**
 * 有时候需要拷贝（改变现有对象的值），有时候又不需要（浪费性能）
 * 传参用const&形式，因为非引用就会发生复制
 */
class String
{
private:
    char *m_Buffer;
    unsigned m_Size;

public:
    String(const char *string)
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size+1];
        memcpy(m_Buffer, string, m_Size);
        m_Buffer[m_Size] = 0; 
    }
    //默认没有copy构造函数的
    String(const String& other):m_Size(other.m_Size){
        //深拷贝
        std::cout<<"copy constructor"<<std::endl;
        m_Buffer = new char[m_Size+1];
        memcpy(m_Buffer, other.m_Buffer, m_Size+1);
    }
    ~String(){
        delete[] m_Buffer;
    }
    char& operator[](const unsigned index) //[]操作符重载
    {
        return m_Buffer[index];
    }
    friend std::ostream &operator<<(std::ostream &stream, const String &string);
};

std::ostream &operator<<(std::ostream &stream, const String &string) //<<操作符重载，用来打印我创建的字符串
{
    stream << string.m_Buffer;
    return stream;
}

int main()
{
    String s = "hello";
    //class没有copy构造函数时是浅拷贝
    String copy = s;
    copy[2]='a';
    std::cout << s << std::endl;
    std::cout << copy << std::endl;
    return 0;
}
