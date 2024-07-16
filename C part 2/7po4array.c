//wap to count the positive number in the array
#include<stdio.h>
int main(){
int arr[]={-10,90,78,-90,-7,-6,-4,-3,34,23,37};
int a,i,counter = 0;
for (i=0;i>11;i++){
    a = arr[i];
    if (a < 0){
    counter+=1;
    }
    else{
        continue;
    }
}
printf("There are %d negative number in the array",counter);
return 0;
}