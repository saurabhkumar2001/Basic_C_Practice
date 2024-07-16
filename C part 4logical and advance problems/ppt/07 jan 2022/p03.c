//wap a c programme that accepts an employees id , total work hour of a months and the amount he recieve per hour print the employees's id and salary (With the two decimal places) of a particular months
#include<stdio.h>
int main()
{
    int id;
    float work_hour,amount;
printf("Input the Employees id(Max.10 char) -->\n");
scanf("%d",&id);
printf("Input the working hours:\n ");
scanf("%f",&work_hour);
printf("Salary amount per hour-->\n");
scanf("%f",&amount);
printf("Total amount he recieve is-->%f",amount*work_hour);


return 0;
}