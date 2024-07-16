#include<stdio.h>
int main()
{
char str[10] ;
char str1[10];
printf("enter the pass! ");
gets(str);
printf("enter the pass again ! ");
gets(str1);
if (strcmp(str,str1)==0){
    printf("password is matched");
}else{

    printf("password is matched");
}
int i , len; 
printf("%d",strcmp(str,str1));
return 0;
}