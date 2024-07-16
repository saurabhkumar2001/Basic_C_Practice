#include<stdio.h>
int main()
{
int *ptr , **dptr;
int num = 100;
ptr = &num;
dptr=&ptr;
printf("%d\n",&num);
printf("%d\n",num);
printf("%d\n",ptr);
printf("%d\n",&ptr);
printf("%d\n",*ptr);
printf("%d\n",&dptr);
printf("%d\n",dptr);
printf("%d\n",*ptr);
printf("%d\n", **dptr);
return 0;
}