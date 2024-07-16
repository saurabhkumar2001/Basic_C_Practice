#include <stdio.h>
void func(int x);
int main()
{
    int i = 100, a;
    printf("the address of the i is %u \n", &i);
    func(100);
    return 0;
}
void func(int x)
{
    printf("the address of the i is %u", &x); // this function genrates the address as per the question
}
//but the value is not same because of the call by refrence