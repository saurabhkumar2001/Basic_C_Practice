#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the number \"a\": \n");
    scanf("%d", &a);
    printf("Enter the number\"b\": \n");
    scanf("%d", &b);
    printf("Enter the number\"c\": \n");
    scanf("%d", &c);
    printf("Enter the number\"d\": \n");
    scanf("%d", &d);
    if ((a > b) && a > c && a > d)
    {
        printf("Greatest of all is %d \n", a);
    }
    else if ((b > a) && b > c &&b > d)
    {
        printf("Greatest of all is %d \n", b);
    }
    else if ((c > b) && c > a && c > d)
    {
        printf("Greatest of all is %d \n", c);
    }
    else
    {
        printf("%d is greatest of all", d);
    }

    return 0;
}