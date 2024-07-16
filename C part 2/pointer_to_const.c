#include<stdio.h>
int main()
{
const int num1 = 100,num2 = 200;
int const *ptr = &num1;  //in this case we cant change the value of the variable  
// int  *ptr = &num1;
// *ptr = 2000;  //not allowed it is allowd when line 6 is applicable
printf("%d",*ptr); //it can read the variable
return 0;
}