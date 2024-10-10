#include <stdio.h>
int main()
{
    // *是指针类型
    int myNum = 1;
    int *p = &myNum;
    printf("%p\t%p\t%p\t%d\t\n", &myNum, p, &p, *p);
    int myNumbers[4] = {25, 50, 75, 100};
    printf("%d\n", *myNumbers);
    printf("%p\n", myNumbers);
    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", &myNumbers[i]);
    }
}
