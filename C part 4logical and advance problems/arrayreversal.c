//array reversal
#include<stdio.h>
int main()
{
int n ,temp;
scanf("%d",&n);
int arr[n];
int *ptr;
ptr = &arr[0];

for (int i = 0; i < n; i++)
{
    scanf("%d",ptr);
    ptr++;
}

for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);
    }
printf("\n");

for(int i = 0;i < n/2;i++){
    temp = arr[i];
    arr[i]= arr[n-i-1];
    arr[n-i-1] = temp;
}
for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}