#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a: \n");
scanf("%d",&a);
(a > 5) ? printf("%d is greater than 5",a):printf("%d is less than 5",a);
return 0;
}