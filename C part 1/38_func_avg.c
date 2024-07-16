//WAP TO FIND THE AVERAGE of three number MAKE A FUNCTION OF AVG
#include<stdio.h>
int av(int x,int y,int z);
int main()
{int a,b,c,skj;
printf("Enter the number : ");
scanf("%d",&a);
printf("Enter the number : ");
scanf("%d",&b);
printf("Enter the number : ");
scanf("%d",&c);
    skj = av(a,b,c);
    printf("The average of %d and %d an %d is %d",a,b,c,skj);

return 0;
}
int av(int x,int y,int z){
    int avg;
    avg = (x+y+z)/3;
    return avg;
}