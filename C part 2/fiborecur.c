#include<stdio.h>
int fibo(int);
int main()
{
    int i , n;
    // printf("Enter the number ");
    // scanf("the number is %d ",&n);
    for(i=0;i<10;i++){
        printf("%u\t",fibo(i));
    }

return 0;
}
int fibo(int num){
    if(num == 0|| num == 1){
        return num;
    }else{
        return fibo(num-1) + fibo(num-2);
    }
}
