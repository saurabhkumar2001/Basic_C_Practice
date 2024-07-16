// wap to store the value in the array and get the value from the array
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
int marks[n];
for(int i=0;i<n;i++){
    printf("Enter the value store in the index %d ",i);
    scanf("%d",&marks[i]);
    }
for(int i = 0;i<n;i++){
    printf("the value store in index %d is  %d\n",i,marks[i]);
}
return 0;
}