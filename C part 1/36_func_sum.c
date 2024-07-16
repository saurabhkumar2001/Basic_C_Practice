#include<stdio.h>
 int sum(int a, int b);  //function prototype passing parameter
int main()
{
    int addition;
    addition = sum(13,17); //call the function and passing the argumnets
    printf("addition --> %d\n",addition);  //main body

return 0;
}
int sum(int a , int b){  //function defination and returns the value to the main body
    int c;
    c = a + b;
    return c;
}