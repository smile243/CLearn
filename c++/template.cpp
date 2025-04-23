#include <iostream>
//模版
//模版只有在实际调用时才会实例化，实例化时才会检查语法；
template <typename T> void bubbleSortAndPrint(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                std::swap(a[j], a[j - 1]);          
    for (int i = 0; i < n; i++)
        std::cout << a[i] << " ";
    std::cout<<std::endl;  
}

// Driver Code
int main()
{
    int a[5] = { 10, 50, 30, 40, 20 };
    int n = sizeof(a) / sizeof(a[0]);
    bubbleSortAndPrint(a, n);
    char b[5] = { 'a', 'd', 'b', 'e', 'c'};
    n = 5;
    bubbleSortAndPrint<char>(b, n);
    return 0;
}