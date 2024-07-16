#include <stdio.h>
int main()
{
    char arr[100];
    int len;
    printf("Enter len of name");
    scanf("%d", &len);
        fflush(stdin);
    for (int i = 0; i <len; i++)
    {
        scanf("%c", &arr[i]);
        fflush(stdin);
    }
    printf("%s",arr);
    return 0;
}