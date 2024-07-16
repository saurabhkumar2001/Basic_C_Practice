#include<stdio.h>
int no_of_digit(int);
int main(){
    int as;
    as = no_of_digit(5637);
    printf("the no of digit is %d ",as);
    return 0;
    }

int no_of_digit(int num){
    static int count = 0;
    if(num>0){
        count++;
        return no_of_digit(num/=10);
    }
    else
    {
        return(count);
    }
         
}