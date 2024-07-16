#include <stdio.h>
int main()
{
    int num1, num2, choice;
    char ch;
    do
    {
        printf("Main menu\n1:sum)\n2:subb)\nEnter ur choice->");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter 2 nums");
            scanf("%d%d", &num1, &num2);
            printf("sum=%d", num1 + num2);
            break;
        case 2:
            printf("Enter 2 nums");
            scanf("%d%d", &num1, &num2);
            printf("sub=%d", num1 - num2);
            break;
        default:
            printf("invalid choice!! ");
        }
        printf("do you want to continue y/n ? ");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch != 'y')
            break;
        system("cls");
    }
     while(1);
    return 0;
}