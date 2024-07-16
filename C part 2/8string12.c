//case sensitive and insensitive 
#include<stdio.h>
int main()
{
char str[10] ;
char str1[10];
printf("enter the username! ");
gets(str);
printf("enter the username again ! ");
gets(str1);
if (strcmp(str,str1)==0){
    printf("username is matched");
}else{

    printf("username is matched");
}
int i , len; 
printf("%d",strcasecmp(str,str1)); //case insensitive
return 0;
}