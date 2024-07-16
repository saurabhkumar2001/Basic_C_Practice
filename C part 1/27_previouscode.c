//write a programme to use the previous code with while loop and do while loop
#include<stdio.h>
int main()
{
int n ,i =1 ,sum = 0;
printf("Enter the number : ");
scanf("%d",&n);
while(i<=n){
    sum+=i;
    printf("sum of %d natural no is %d\n",n,sum);
    i++;
}

return 0;
}

// DO while loop same question
#include <stdio.h>
int main()
{
    int n, i = 0, sum = 0;
    printf("Enter the number :");
    scanf("%d", &n);
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("the sum of %d natural no is %d\n", n, sum);
    return 0;
}