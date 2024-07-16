#include<stdio.h>
int main()
{
int num , i=1 ;
printf("Enter a number:");
scanf("%d",&num);
top:
printf("%d X %d = %d\n",num,i,num*i);
i++;
if(i<=10)
goto top;
return 0;
}