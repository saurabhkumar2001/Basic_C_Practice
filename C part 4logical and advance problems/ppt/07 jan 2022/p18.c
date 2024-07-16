// Write a C program to Swap two Numbers Without Using Temporary     Variables.
#include<stdio.h>
int main()
{
int x = 4,y = 3,temp;
temp = x;
x = y;
y = temp;
printf("the value of x = %d and y = %d after a swap",x,y);
return 0;
}