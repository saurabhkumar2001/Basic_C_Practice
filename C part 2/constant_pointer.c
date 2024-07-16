#include<stdio.h>
int main()
{
const int num1 = 100 ,num2 = 500;
int *const ptr = &num1;
*ptr = 2000;
// ptr = &num2; it is not applicable because throught it can hold one value to variable 
//but it can modify the value
printf("%d",*ptr);
return 0;
}