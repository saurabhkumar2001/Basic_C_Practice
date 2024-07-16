// wap to print the airthmetic for the pointer 
#include<stdio.h>
int main()
{
int i = 90;
int *ptr = &i;
printf("The value of the address i is %u\n",ptr);
printf("The value of the address i is %u\n",&i);
ptr++;
printf("The value of the address i is %u\n",ptr);
return 0;
}