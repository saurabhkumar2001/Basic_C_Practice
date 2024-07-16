#include <stdio.h>
void goodafternoon();
void goodmorning();
void goodnight();

int main()
{
    printf("good morning function returns -->");
    goodmorning();

    return 0;
}
void goodmorning()
{
    printf("GOOD MORNING\n");
    printf("good afternoon function returns -->");
    goodafternoon();
}
void goodafternoon()
{
    printf("GOOD AFTERNOON\n");
    printf("good night function returns -->");
    goodnight();
}
void goodnight()
{
    printf("GOOD NIGHT\n");
}