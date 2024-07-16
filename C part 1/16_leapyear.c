#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: \n");
    scanf("%d", &year);
    if ((year % 4 == 0) || year % 400 == 0)
    {
        printf("the %d year is leap year", year);
    }
    else
    {
        printf("the %d year is not leap year\n", year);
    }
    return 0;
}