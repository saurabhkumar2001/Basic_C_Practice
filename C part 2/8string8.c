// strcpy to copy the value of one string to the other string 
#include<stdio.h>
#include<string.h>
int main()
{
    char a;
char *sr="this is my way of coding! ";
char str[100];
char *res;
 res = strcpy(str,sr);
printf("the value of the sr is now in str =  %s \n",str);
printf("the value of the sr is now in str =  %s \n",res);  //we can also store in the character pointer;
return 0;
}