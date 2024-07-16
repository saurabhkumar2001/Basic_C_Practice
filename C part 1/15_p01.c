// WAP A PROGRAM TO FIND OUT WHETHER A STUDENT IS PASS OR FAIL IF IT REQUIRES TOTAL OF 40 PERCENT AND AT LEAST 33 PERCENT IN EACH SUBJECT TO PASS ASSUME 3 SUBJECT AND TAKE MARKS AS AN INPUT FROM THE USER
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number of maths ");
    scanf("%d", &a);
    printf("Enter the number of physics ");
    scanf("%d", &b);
    printf("Enter the number of chemistry ");
    scanf("%d", &c);
    float total = (a + b + c) / 3;
    printf("The total percentage is %f\n", total);
    if ((total < 40.0) || a < 33.3 || b < 33.3 || c < 33.3)
    {
        printf("you have failed the exam because you have %f in all subject\n ", total);
    }
    else
    {
        printf("you have passed the exam because your total percentage in the exam is %f\n", total);
    }

    return 0;
}