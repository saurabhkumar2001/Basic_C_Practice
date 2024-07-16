#include <stdio.h>
int main()
{
    int L, B;
    float area;
    printf("Enter the length of the recatnagle:  \t ");
    scanf("%d", &L);
    printf("Enter the breadth of the rectangle:  \t ");
    scanf("%d", &B);
    area = L * B;
    printf("the area of %d and %d is %f", L, B, area);
}