#include<stdio.h>
int main()
{
int i,c=0;
char arr[10] = {'a','v','c','b','c'};
for(int i = 0 ; i<5;i++)
printf("%c\t",arr[i]-32);
printf("%s",arr);
return 0;
}