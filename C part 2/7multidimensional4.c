#include<stdio.h>
int main()
{
int arr[3]={10,20,30};
int *ptr;
ptr = &arr[0];
for(int i=0;i<3;i++){
    // printf("%3d ",*(ptr));     it will only print the first element in the array 
    printf("%3d ",*(ptr+i));        //but it will print all the element in the array because of the presence of loop 
}
printf("\n");
return 0;
}