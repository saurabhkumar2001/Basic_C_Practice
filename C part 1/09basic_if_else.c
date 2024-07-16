// WAP TO CHECK WHETHER THE PROGRAMME IS GIVEN IS ODD OR EVEN
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter the number : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the number %d is even number",a);
    }
    else
    {
        printf("The number %d is odd number!!",a);
    }
    return 0;
}