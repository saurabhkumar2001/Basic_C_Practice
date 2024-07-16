// repeat the previous problem with the help of user input
#include <stdio.h>
int main()
{
    int i=0, j=0, num;
    // int arr[i][j];
    // int arr[3][10] = {{2,4,6,8,10,12,14,16,18,20},{3,6,9,12,15,18,21,24,27,30},{4,8,12,16,20,24,28,32,36,40}};
    int arr[i][j];
    for (int i; i < 3; i++)
    {
        printf("Enter the number of which you want multiple? ");
        scanf("%d ", &num);

        for (j; j <= 10; j++)
        {
            arr[i][j] = num * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}