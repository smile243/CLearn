#include <stdio.h>
#include <string.h>
int main()
{
    printf("Hello \\World!\n");
    printf("\"Have a good day!\"\n");
    int myNum = 1;          
    float myFloatNum = 5.99; 
    char myLetter = 'D';   
    // &获取变量地址  
    printf("%p\n", &myNum);
    printf("%d\t%lu\n", myNum,sizeof(myNum));
    printf("%f\t%lu\n", myFloatNum,sizeof(myFloatNum));
    printf("%c\t%lu\n", myLetter,sizeof(myLetter));
    char text[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    //  数组如果是用字符拼接的，末尾必须是\0;字符串会自动在末尾加 sizeof 和strlen就能看出来 这点
    printf("%s\t%lu\t%lu\n", text,sizeof(text),strlen(text));
    return 0;
}