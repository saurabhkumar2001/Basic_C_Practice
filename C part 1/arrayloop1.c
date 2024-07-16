// wap to assign the value to the array from the help of loop
#include<stdio.h>
int main()
{
int i,marks[5];
for (int i = 0;i<5;i++){
    printf("enter the number: ");
    scanf("%d",&marks[i]);
}
for(i = 0;i<5;i++){
    printf("element of %d index is %d\n",i,marks[i]);
}
return 0;
}