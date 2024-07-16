// C program to convert temperature from Fahrenheit to Celsius.
#include <stdio.h>
int main()
{
    float celsius, far;
    printf("enter the temperarure into ferhenite \n");
    scanf("%f", &far);
    celsius = (far - 32) * 5 / 9;
    printf("the temperature of Fahrenheit into  is Celsius  %f ", celsius);
    return 0;
}