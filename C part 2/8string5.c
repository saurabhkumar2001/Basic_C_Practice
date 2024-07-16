// gets is a function which used to recieve multiwords in
// in the string 
// puts is a funcion which work same as puts but it can also return the statement at the end
// #include<stdio.h>
// int main()
// {
// char s[34]; 
// printf("Enter your name ? ");
// gets(s);  //we can add other words including space
// printf("your name is %3s ",s);
// return 0;
// }


#include<stdio.h>
int main()
{
char s[34]; 
printf("Enter your name ? ");
gets(s);
puts(s);  //we can add other words including space
return 0;
}