// make an 2Darray of 3X10 and store the multiplication table of 2 and 3 and 7 etc.
#include <stdio.h>
int main()
{
    int arr[3][10];
    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = 2 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("2X%d = %d\n", i + 1, arr[0][i]);
    }

    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = 3 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("3X%d = %d\n", i + 1, arr[0][i]);
    }

    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = 7 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("7X%d = %d\n", i + 1, arr[0][i]);
    }

    return 0;
}