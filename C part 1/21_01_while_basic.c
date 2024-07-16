//WAP TO PRINT THE NATURAL NO B/W 10 T0 20
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:\n ");
    scanf("%d", &a);
    while (a < 21)
    {
        printf("The number is %d\n", a);
        a++;  // a++ phle print kre fir increment kre  or ++a phle increment fir print kre
    }
    return 0;
}