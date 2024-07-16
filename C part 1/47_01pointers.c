// WAP TO PRINT THE ADDRESS OF THE VARIABLE AND USE THE VARIABLE TO PRINT THE value OF THE VARIABLE
#include<stdio.h>
int main()
{ int number = 90;
printf("The address of the variale is %u\n",&number);
printf("The value of the variale by address is %d\n",*(&number));

return 0;
}