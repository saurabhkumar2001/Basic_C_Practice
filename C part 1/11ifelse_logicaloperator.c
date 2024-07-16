#include <stdio.h>
int main()
{
    int age;
    printf("enter the age: ");
    scanf("%d", &age);
    if (age <= 70 && age >= 18)  //logical operators are and --> && or --> || not --> !
    {
        printf("you are eligible to drive ");
    }
    else
    {
        printf("you are not eligible to drive");
    }
    return 0;
}