// WAP TO CALCULATE THE INCOME TAX ACC ABOVE 2.5L FOR 5 % AND ABOVE 5.0L FOR 20% ABOVE 10.0 FOR 30%
#include <stdio.h>
int main()
{
    float amount;
    float tax;
    printf("Enter the amount : \n");
    scanf("%f", &amount);
    if (amount >= 250000)
    {
        tax += (amount-250000) * 5 / 100;
        printf("my total tax is %f\n", tax);
    }
    else if (amount >= 500000)
    {
        tax += (amount-500000) * 10 / 100;
        printf("my total tax is %f\n", tax);
    }
    else if (amount >= 1000000)
    {
        tax += (amount-1000000) * 20 / 100;
        printf("my total tax is %f\n", tax);
    }
    return 0;
}