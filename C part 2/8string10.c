// to compare the string we use strcmp and strkcmp
//it is case sensitive <strcmp>!!
#include<stdio.h>
int main()
{
char str[] = "saurabh";
char str1[] = "saurabh";
int i , len; 
printf("%d",strcmp(str,str1));
return 0;
}

//if the output is zero then the string is equal !!