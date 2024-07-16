// wap to recur the fibo
#include <stdio.h>
unsigned long long int mem[100] = {0};
unsigned long long  fibo(int num);
int main()
{
    int i;
    for (i = 0; i < 40; i++)
    {
        printf("%u \n", fibo(i));
    }

    return 0;
}

unsigned long long  fibo(int num){

    if (num == 0 || num == 1)
    {
        return num;
        if(mem[num]!=0)
        return mem[num] ;
    }
    else
    {
        mem[num]=fibo(num - 1) + fibo(num - 2);
        return mem[num];
    }
}
