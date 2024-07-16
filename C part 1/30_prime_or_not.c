// WAP TO CHECK WHETHER THE NO IS PRIME OR NOT
#include <stdio.h>
int main()
{
    int num1, prime = 1;
    printf("Enter the number\t");
    scanf("%d", &num1);
    for (int i = 2; i < num1; i++)
    {
        if (num1 % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 && num1 != 2)
    {
        printf("it is not a prime no\n");
    }
    else
    {
        printf("it is a prime no\n");
    }
    return 0;
}