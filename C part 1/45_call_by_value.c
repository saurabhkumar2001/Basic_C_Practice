// WAP TO SWAP A NUMBERS
#include <stdio.h>
void swap(int x, int y);
int main()
{
    int x = 3, y = 4;
    printf("value of x and y before swap is %d and %d\n", x, y);
    swap(x, y);
    printf("value of x and y after swap is %d and %d\n", x, y);

    return 0;
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
