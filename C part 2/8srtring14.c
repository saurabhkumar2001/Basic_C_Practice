#include<stdio.h>
#include<string.h>
int main()
{
char str[] = "saurabh";
char str1[] = " kumar";
int i , len; 
strcat(str,str1);
printf("%s",str); //main string <str > m append ho jayega str1
return 0;
}