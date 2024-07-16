#include <stdio.h>
int main()
{
    int arr[][3] = {21, 23, 34, 54, 87, 65, 34, 32, 54};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            // printf("%u ", arr[i][j]);
            printf("%u ", *((*(arr+i))+j));   //ek pointer 2d ko deference kr rha h aur ek pointer uske ander ki value ko 
        }
        printf("\n");
    }

    return 0;
}