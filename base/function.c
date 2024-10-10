#include <stdio.h>

// 声明和定义分开，上面是声名，下面是定义
void myFunction(char name[]);
int main()
{
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    return 0;
}
//char数组就是string
void myFunction(char name[])
{
    printf("Hello %s\n", name);
}