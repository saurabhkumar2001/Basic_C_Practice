//WAP TO PRINT IN C THAT TAKES MINUTE AS INPUT ,AND DISPLAY THE TOTAL NUMBER OF HOURS AND MINUTES
#include<stdio.h>
int main()
{
int min , m , M;
printf("Input minute: \n");
scanf("%d",&min);
m = min/60;
M = min%60;
printf("%d hours and %d minutes",m,M);
return 0;
}