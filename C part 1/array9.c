// wap to reverse the element of a array and store in other array
#include<stdio.h>
int main()
{
int arr[5]={10,20,30,40,50};
int arr2[5];
int i;
arr [4-i] = arr2[i];
for(i=4;i>=0;i--)
printf("%d",arr2[i]);
return 0;
}