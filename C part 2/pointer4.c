// pointer airthematic and pointer assignment
#include <stdio.h>
int main()
{
    int arr[5] = {12, 23, 34, 45, 56};
    int *ptrs, *ptre;
    ptrs = &arr[0];
    ptre = &arr[4];
    printf("%d \n", ((*ptre - *ptrs) / 4) + 1);
    if (*ptrs >= *ptre)
    {
        printf("value 1 is greater than value 2 \n");
    }
    else
    {
        printf("value 2 is greater than value 1 \n");
    }
    printf("%d \n", *ptre);
    printf("%d", *ptrs);
    return 0;
}
/*
1>pointer to a const
2>const pointer
3> const pointer pointing to a const
*/