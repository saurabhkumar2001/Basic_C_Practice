#include <stdio.h>
int main()
{

    int num;
    char variable;

        printf("Enter the number:  ");
        scanf("%d", &num);
        for (int i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d\n", num, i, num * i);
        }
        printf("do you want to continue press y");
        scanf(">%c", &variable);
        printf(" value%c",variable);
     return 0;
}