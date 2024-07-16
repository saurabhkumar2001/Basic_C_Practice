// WAP TO CHECK WHETHER SOMEONE IS ELIGIBLE TO VOTE OR NOT??
#include <stdio.h>
int main()
{
    int age;
    printf("enter the age: \n");
    scanf("%d", &age);
    if (age >= 18) // relational operators are <,>,=,<=,>=,!=
    {
        printf("you are eligible to vote because your age is %d\n", age);
    }
    else
    {
        printf("you are not eligible to vote because your age is %d\n", age);
    }
    // if(age = 50){
    //     printf("here is the half centuary"); //but we cannot do it because it is a assignment operator so that this condition is true for that it will print if the number is greater then 50 so that we comment it out
    // }
    if (age == 50)
    {
        printf("congratulations you have completed half centuary\n");
    }

    return 0;
}