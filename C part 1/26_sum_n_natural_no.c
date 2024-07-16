// WAP TO SUM N NATURAL NO USING FOR LOOP
#include <stdio.h>
int main()
{
    int n, i, sum;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("the sum of %d natural no. is %d\n", n, sum);
    return 0;
}
