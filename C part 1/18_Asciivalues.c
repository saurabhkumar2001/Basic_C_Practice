//WAP TO CHECK WHETHER THE NO GIVEN IS LOWERCASE OR UPPERCASE?? 
#include<stdio.h>
int main()
{
char a;
printf("Enter the character : ");
scanf("%c",&a);
if(a<=127 && a>=97){
    printf("it is lowercase");
}
else{
    printf("it is not lowercase");
}
return 0;
}