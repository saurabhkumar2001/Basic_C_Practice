#include<stdio.h>
int main(){
    float year,rate,principle;
    printf("Enter the priniple amount: \n");
    scanf("%f",&principle);
    printf("Enter the time period: \n");
    scanf("%f",&year);
    printf("Enter the rate of interest: \n");
    scanf("%f",&rate);
    float si = (principle*rate*year)/100;
    printf("your si is : %f",si);
    return 0;
    }