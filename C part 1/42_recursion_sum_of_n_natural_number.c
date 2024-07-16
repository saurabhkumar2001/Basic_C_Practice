#include <stdio.h>
int sumn(int x);
int main()
{
    int n, skj;
    printf("Enter the number: ");
    scanf("%d", &n);
    skj = sumn(n);
    printf("sum of %d natural number is %d : ",n,skj);

    return 0;
}
int sumn(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x + sumn(x - 1);
    }
}