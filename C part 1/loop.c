#include <stdio.h>
int main()
{
    int i = 1, num;
    char variable;
    do
    {
    printf("Enter the number:");
    scanf("the number: %d", &num);
          for (i; i <= 10; i++)
          {
              printf("%d X %d \t= %d\n", num, i, num * i);
            }
        fflush(stdin);                      //dought !!
        printf("do you want to continue ?? ");
        scanf("%c", &variable);
        if (variable == 'y')
        {
            continue;
        }
        else
        {
            break;
        }

    } while (1);

    return 0;
}