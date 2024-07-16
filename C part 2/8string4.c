//we can also input the string by the help of 
// %s format specifier
#include<stdio.h>
int main()
{
char str[34]; 
printf("Enter your name ? ");
scanf("%s",str);
printf("your name is %3s ",str);
return 0;
}