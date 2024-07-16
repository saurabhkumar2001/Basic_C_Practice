#include<stdio.h>
void swap(int x , int y );
int main()
{
int num1 = 20,num2 = 10;
printf("before swap num1= %d num2= %d \n",num1,num2);
swap(num1,num2);
return 0;
}
void swap(int num1 , int num2){
    int saurabh = num1;
    num1 = num2;
    num2 = saurabh;
printf("after swap num1= %d num2= %d",num1,num2);  
}