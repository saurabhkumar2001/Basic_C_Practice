#include<stdio.h>
int main()
{
int day;
printf("Enter the number of day in a week 1 to 7 ");
scanf("%d",&day);
if(day == 1){
    printf("it is monday");
}
else if(day == 2){
    printf("it is Tuesday ");
}
else if(day == 3){
    printf("it is Wednesday");
}
else if(day == 4){
    printf("it is Thursday");
}
else if(day == 5){
    printf("it is Friday");
}
else if(day == 6){
    printf("it is Saturday");
}
else if(day == 7){
    printf("it is Sunday");
}
return 0;
}