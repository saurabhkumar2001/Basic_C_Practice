#include<stdio.h>
int main()
{ 
int arr[5] = {10,20,30,40,50};
for(int i = 4 ;i >= 0;i-- ){
    printf("the value store in the array on the index %d is %d\n",i,arr[i]);
}
return 0;
}