#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
char str1[20];
printf("Enter the word ");
gets(str);
strcpy(str1,str);
strrev(str);

if (strcmp(str,str1)==0){
    printf("it is palindrome");
}else{
    printf("it is not");
}
return 0;
}