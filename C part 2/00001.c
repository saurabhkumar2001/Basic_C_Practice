#include<stdio.h>
int sum(int ,int );
int main(){
    int op;
int a = 10, b = 20;
op = sum(a,b);
printf("the sum is %d",op);
return 0;
}
int sum(int num , int num1){
    return num + num1;
}