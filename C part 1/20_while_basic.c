#include <stdio.h>
int main()
{
    int a;
    printf("Enter the no : \n");
    scanf("%d", &a);
    while (a < 10)
    {
        printf("The number is %d\n", a);
        a++;
    }
    return 0;
}