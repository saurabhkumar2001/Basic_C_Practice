// Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    int main()
    {
        char a[1000];
        int i, n, j, count = 0;
        scanf("%[^\n]s", a); // input from user
        n = strlen(a);       // finding string length
        char ch = '0';
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (a[j] == ch)
                {
                    count++;
                }
            }
            printf("%d ", count);
            count = 0;
            ch++;
        }

        return 0;
    }
