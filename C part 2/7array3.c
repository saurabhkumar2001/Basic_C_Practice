// input output from the help of pointers in the array
#include <stdio.h>
int main()
{
    int marks[5];
    int *ptr;
    ptr = &marks[0];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of the student %d : ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value store in index %d is  %d\n", i + 1,marks[i]);
        ptr++;
    }
    return 0;
}