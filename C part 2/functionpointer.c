#include<stdio.h>
void sum(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
int main()
{void (*fptr)(int i , int j) = &sum;
fptr(12,30);
fptr = sub;
fptr(12,20);
fptr = mul;
fptr(12,20);
fptr = div;
fptr(12,20);
return 0;

}
void sum(int num1,int num2){
    printf("\n sum of %d and %d = %d ",num1,num2,num1+num2);
    //hum kisi function ko point kr sakte h funtion pointer k through
}
void sub(int num1,int num2){
    printf("\n sum of %d and %d = %d ",num1,num2,num1-num2);
    //hum kisi function ko point kr sakte h funtion pointer k through
}
void mul(int num1,int num2){
    printf("\n sum of %d and %d = %d ",num1,num2,num1*num2);
    //hum kisi function ko point kr sakte h funtion pointer k through
}
void div(int num1,int num2){
    printf("\n sum of %d and %d = %d ",num1,num2,num1/num2);
    //hum kisi function ko point kr sakte h funtion pointer k through
}