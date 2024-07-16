//wap to print the value of the array with the help of the function
#include<stdio.h>
void printarray(int *ptr,int num);    //function for print the array with the help of pointer 
void printarray1(int array[],int number); //function for print the array with the help of array
int main()
{ int arr[] = {45,56,67,687,87,76,54};
int *ptr;
ptr = &arr[0];
    printarray(ptr,6);
    printarray1(arr,6);
    printf("print the array when we change the element the array !!\n");
    for(int j=0;j<=6;j++){
        printf("%3d ",arr[j]);
    }
 
return 0;
}

void printarray(int *ptr,int num){
    printf("print the array with the help of the pointer\n");
    for(int i =0;i<=num;i++){
        printf("%3d ",*(ptr+i)); 
    }
    printf("\n");    

}
void printarray1(int arr[],int num){

    printf("print the array with the help of the array \n");
    for (int i = 0; i <= num ; i++){
        printf("%3d ",arr[i]);
    }
    arr[2]=90;
    printf("\n");}  // this will change in the main array as well because they work with the address
/*when we use the ptr then it will give us the address and we change the ptr with the *ptr
then it will give us the value stored in the zero index
after that when we bind the i with the help of that ptr then it will give the proper
value we want */