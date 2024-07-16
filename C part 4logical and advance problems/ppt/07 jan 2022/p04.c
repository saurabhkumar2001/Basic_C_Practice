//WAP TO CALCULATES THE VOLUME OF A SPHERE. (FORMULA: V = 4/3*PI*R*R*R) 
#include<stdio.h>
int main()
{
int radius ;
float pi = 3.14;
printf("Input the radius of the sphere: \n");
scanf("%d",&radius);
printf("The volume of the sphere is %f ",4/3*(pi*radius*radius*radius));
return 0;
}