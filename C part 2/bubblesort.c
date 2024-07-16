#include <stdio.h>
int main()
{
    int i, j, temp;
    int arr[] = {12, 32, 67, 45, 67, 89, 44, 67, 8, 323, 54, 78, 9};
    for (i = 0; i < 13; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < 13; i++)
    {
        for (j = 0; j < 13 - i - 1 ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    printf("The list after perfoming sorting is \n");
      for (i = 0; i < 13; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
