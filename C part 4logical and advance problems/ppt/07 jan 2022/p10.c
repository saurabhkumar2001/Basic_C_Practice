//. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds
#include<stdio.h>
int main()
{
    int sec,hrs,min,s;
    printf("Test Data: \n");
    printf("input secound: ");
    scanf("%d",&sec);
    hrs = (sec/3600);
    min = (sec - (hrs*3600))/60;
    s = (sec -(3600*hrs)-(min*60));
    printf("%d:%d:%d",hrs,min,s);
return 0;
}
