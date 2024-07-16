// sort accordingly to the alphabet acsending to descending
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k;
    char names[5][20], temp[20];
    for (i = 0; i < 5; i++)
    {
        gets(names[i]);
    }
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5 - i - 1; j++)
            {
                if (strcmp(names[j], names[j + 1]) == 1)
                {
                    strcpy(temp, names[j]);
                    strcpy(names[j], names[j + 1]);
                    strcpy(names[j + 1], temp);
                }
            }
        }
        printf("\n");
        for(i = 0;i<5;i++){
            puts(names[i]);
        }
    return 0;
}