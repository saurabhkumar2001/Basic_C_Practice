//pointer to pointer type in this we declare one pointer to the other pointer
#include<stdio.h>
int main()
{int x = 89;
int *ptr;
int **saurabh;
int ** pointer;

 ptr = &x;                       //to store the address of the variable to the pointer 
saurabh = &ptr;
pointer = &saurabh;                    //to store the address of the pointer which store the address of the variable 
// print the pointer to pointer 
printf("The address of the x is %d\n",ptr);
printf("The address of the ptr is %d\n",saurabh);
printf("The address of the saurabh is %d\n",pointer);
printf("The value of the x is %d\n",*(ptr));
// printf("The value of the ptr is %d\n",);
// printf("The value of the saurabh is %d\n",
 return 0;
}