// wap to recur the fibo
#include <stdio.h>
int fibo(int);
int main()
{
    int i, arr[100];
    int *ptr;
    ptr = arr[0];
    for (i = 0; i < 10; i++)
    {
        printf("%u \t", fibo(i));
    }

    return 0;
}
int fibo(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return fibo(num - 1) + fibo(num - 2);
    }
}