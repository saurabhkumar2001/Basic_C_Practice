/*while loop first check the condition then executes and
do while loop executes the condition then check the condition*/
/*wap to print the n natural number from do while loop*/
#include <stdio.h>
int main()
{
    int a;
    printf("enter the number:\n ");
    scanf("%d", &a);
    do
    {
        printf("my number is %d\n", a);
        a++;
    } while (a <= 100);

        return 0;
}