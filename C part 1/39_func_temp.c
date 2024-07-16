// WAP TO FIND THE FERHENITE TEMP WITH THE CELSIUS
#include<stdio.h>
int temp(int x );
int main()
{
    int celsius,far;
    printf("enter the temperarure into celsius \n");
    scanf("%d",&celsius);
    far = temp(celsius);
    printf("the temperature of celsius into ferhenite is  %d ", far);
    return 0;

return 0;
}
int temp(int x ){
    int y;
     y = (x + 32) * 9 / 5;
     return y;
}