#include<stdio.h>
#include<string.h>

int main()
{
char str[29],str1[20],*res;
res=strstr("hello worls of c","hello");
puts(res);
if(res)
    printf("found");

else
    printf("not found");

return 0;
}