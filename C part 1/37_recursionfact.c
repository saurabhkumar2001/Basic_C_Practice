// WAP TO GIVE A FACTORIAL THROUGH A RECURSION
#include<stdio.h>
int fact(int x);
int main()
{
    int num , saurabh;
    printf("the number which you have to find the factorial : ");
    scanf("%d",&num);
    saurabh = fact(num);
    printf("the factorial of %d is %d \n",num,saurabh);

return 0;
}
int fact(int x){
    if (x == 1 || x == 0){
        return 1;
    }
    else{
        return x*fact(x-1);   //look function calling it self inside it its crazy it acts like loop
    }
}