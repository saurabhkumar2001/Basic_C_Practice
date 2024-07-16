//WAP A PROGRAMME THAT CONVERTS 
//KILOMETER PER HOUR TO MILES PER HOUR
#include<stdio.h>
int main()
{
float km;
printf("Input Kilometer per hour:");
scanf("%f",&km);
float miles = km*0.621371;
printf("%f miles per hour",miles);
return 0;
}