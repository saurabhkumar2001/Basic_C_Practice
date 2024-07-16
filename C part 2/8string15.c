// finding  sub of string or finding string in string
#include<stdio.h>
#include<string.h>

int main()
{
char st1[29],st2[20],*res;
res=strstr("Hello world of c", "world");
puts(res);
return 0;
}