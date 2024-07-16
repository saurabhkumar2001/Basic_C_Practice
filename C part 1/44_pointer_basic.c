//pointer is the term which store the address
#include<stdio.h>
int main()
{
int i = 35;
int *j = &i; //j will now store the address of i
printf("The value of i %d\n",i);   
printf("The value of i %d\n",*j);   //* operator value at address
printf("The address of i %u\n",&i);  //& operator address of the value 
printf("The address of i %u\n",j);   
printf("The address of j %u\n",&j);   
printf("The value of j %u\n", *(&j));   
return 0;
}