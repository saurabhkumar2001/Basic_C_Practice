// Q write a programme to check the number is divisible by 97 or not
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);
    printf("divisibility test return: %d\n", num%97); //if it returns 0 then it is divisible 
    return 0;
}