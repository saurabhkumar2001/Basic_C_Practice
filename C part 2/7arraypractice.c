// programme to store the multiples from the user !!
#include <stdio.h>
int main()
{
    int number, i, j;
    int arr[3][10];
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter the number");
        scanf(" %d",&number);
        for (int j = 1; j <= 10; j++)
        {
        arr[i][j] = number*j;
        }
        printf("\n");
    }


    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
        printf("%3d",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}