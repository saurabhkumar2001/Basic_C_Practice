#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr = &arr[0];
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {

        printf("Address of both is same! ");
    }
    else
    {
        printf("Address of the both location is not same");
    }
    return 0;
}