/*this is use to generate the number from 1 to 100*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int number;
srand(time(0));
number = rand()%100+1;
printf("my generated no is %d",number);

return 0; 

}   