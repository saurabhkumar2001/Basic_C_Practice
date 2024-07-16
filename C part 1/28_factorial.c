//WAP TO SHOW A FACTORIAL OF A GIVEN NUMBER
#include<stdio.h>
int main()
{
    int n ,i = 1 ,fact = 1;
printf("Enter the number : ");
scanf("%d",&n);
for(i;i<=n;i++){
    fact = fact*i;
    printf("the factorial of %d is %d\n",i,fact);
}


return 0;
}