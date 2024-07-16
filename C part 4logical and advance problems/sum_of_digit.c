#include<stdio.h>
int main() {
	
    int d,n,sum=0;
    scanf("%d",&n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n!=0){
    d = n%10;
    sum = sum+d;
    n=n/10;   
    }
    printf("%d",sum);
    
    return 0;
}