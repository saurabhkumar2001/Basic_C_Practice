// WAP TO PROGRAMME TO USE CALl BY REFERENCE TO GET THE VALUE OF A NUMBER INTO 10 TIMES ALSO USE THE CONCEPT OF POINTER IN THIS
#include <stdio.h>
int function(int *x);
int main()
{
    int x, val1;
    printf("the value of x is ");
    scanf("%d",&x);
    val1 = function(&x);
    printf("my value is : %d ", val1);
    return 0;
}
int function(int *x)
{
    int value, x;
    value = *x * 10;
    return value;
}