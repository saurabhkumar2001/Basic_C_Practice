#include<stdio.h>
int main()
{
int integer,*iptr;
char character,*cptr;
float floating,*fptr;
printf("%d %d %d \n",sizeof(integer),sizeof(character),sizeof(floating));
printf("%d %d %d",sizeof(iptr),sizeof(cptr),sizeof(fptr));
return 0;
}