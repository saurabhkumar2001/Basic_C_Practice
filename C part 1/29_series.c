// wap to calculate the sum occuring in the multiplication table of 8
#include <stdio.h>
int main()
{
    int n1, n, i, sum;
    printf("Enter the no which you have to find the multipliation table ");
    scanf("%d", &n1);
    printf("Enter the last no of the multipliation table ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum += n1 * i;
    }
    printf("the sum of the multiplication table of %d till %d is %d\n ", n1, n, sum);

    return 0;
}