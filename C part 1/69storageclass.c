// some of the storage class are listed below : -
// aut0 , register , static , extern
#include <stdio.h>

void test()
{
    int i = 10;
    printf("%d ", i);
    i++;
}

int main()
{
    int i;
    for (i = 0; i < 5; i++)
        test();

    return 0;
}