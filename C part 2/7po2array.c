//this programme will store the multiple of any number in the array !
#include <stdio.h>
int main()
{
    int arr[10], num;
    int *ptr;
    ptr = &arr[0];
    printf("Enter the number which you want to get the multiple : ");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num * (i + 1);
        ptr++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("value stored in the %d in index is %3d\n", i, arr[i]);
    }

    return 0;
}