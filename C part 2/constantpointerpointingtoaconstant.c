//constant pointer pointing to a constant
#include<stdio.h>
int main()
{
const int num1 = 100,num2 = 200;
const int *const ptr = &num1;
printf("%d",*ptr);  //it could not change the value and could take other reference
return 0;
}