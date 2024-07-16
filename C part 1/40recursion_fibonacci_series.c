#include<stdio.h>
int fibo(int x);
int main()
{
    int num , skj;
    printf("Enter the number : ");
    scanf("%d",&num);
    skj = fibo(num);
    printf("fibonacci series of %d is %d",num,skj);

return 0;
}
int fibo(int x){
    int num;
    if(num == 0 || num == 1){
        return 1;
    }
    else
    {
     return x+fibo(x-1);   
    }
    
}