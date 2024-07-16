// standard library function for string
// string manipulation
#include<stdio.h>
#include<string.h>  // we have to include this
int main()
{
char *st = "saurabh kumar jha";
int a = strlen(st);  //it tell the length of the string character excluding the null character
printf("The length of the string is %d",a);
return 0;
}