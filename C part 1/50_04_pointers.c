// #wap to return the sum and average of the two number in the main from the other function
#include<stdio.h>
float sum(float *x ,float *y);     //prototype declaration of function with the help of the 
float avg(float *x , float *y);
int main()
{
    float x = 5.99 , y = 89.00;
    float add,average;
    add = sum(&x,&y);
    average = avg(&x,&y);
    printf("the sum of two number is %f \n",add);
    printf("the average of two number is %f ",average);


return 0;
}
float sum(float *x ,float *y){
    return *x + *y;
    }
float avg(float *x ,float *y){
    return (*x + *y)/2;
    }

