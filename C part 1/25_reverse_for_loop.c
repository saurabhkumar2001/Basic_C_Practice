// write a programme to reverse a multiplication table with the help of for loop
#include <stdio.h>
int main()
{
    int a,  mul;
    printf("enter the number: ");
    scanf("%d", &a);
    for (int i=10;i ; i--)
    {
        mul = i*a;
        printf("%d X %d = %d\n",a,i,mul);
    }
    return 0;
}