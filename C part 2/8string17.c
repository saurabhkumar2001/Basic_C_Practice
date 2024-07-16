// to sort the array with the help of bubble sort 
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, arr[10] = {12, 23, 43, 5, 2, 76, 54, 3, 1, 5}, temp;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)

        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n");
    printf("after sorting \n");
    for (i = 0; i < 10; i++)
    {printf("%d ",arr[i]);
    }
    return 0;
}
