// wap to sum the element present in the array
#include <stdio.h>
int main()
{
    int n,a=0;
    scanf("%d", &n);
    int arr[n];
    int *ptr;
    ptr = &arr[0];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        a+=arr[i];
    }
    printf("the value of the element present in the array is %d",a);
    return 0;
}