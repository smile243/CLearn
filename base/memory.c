#include <stdlib.h>
#include <stdio.h>
/**
 * 动态分配内存 malloc calloc
 * stack memory是在方法内的
 * realloc 如果内存不够，方法会返回NULL
 */
int main()
{
    int *ptr;
    int *ptr2;
    // ptr = malloc(sizeof(*ptr));
    ptr = calloc(4, sizeof(*ptr));
    *ptr = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr2 = realloc(ptr,8);
    printf("%d\n", *ptr);
    printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]);
    printf("%d %d %d", ptr2[1], ptr2[2], ptr2[3]);
}