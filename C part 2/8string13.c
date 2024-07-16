//to make the login page!!
#include<stdio.h>
#include<string.h>
int main()
{
char str[10] ;
char str1[10];
char str2[10] = "skj@2003"  ;
char str3[10] = "hello@123" ;   // gets(ch);
printf("enter the username ");  // printf(****)
gets(str);
printf("enter the password ! ");
gets(str1);
if (strcmp(str,str2)==0 && strcasecmp(str1,str3)==0){
    printf("Welcome !");
}else{

    printf("invalid username and pass!!");
}
return 0;
}