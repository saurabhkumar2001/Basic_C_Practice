// WAP TO  generate a no and we all have to make a guess that the no is correct if the guess is greater with respect to the guess no
// it gives us a message the no is greater and if the no is smaller then the no is showing the no is less and counter is used to count the no
// of guesses
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("GUESS THE NUMBER BETWEEN 1 TO 100\n");
    int number, guess, counter = 1;
    srand(time(0));
    number = rand() % 100 + 1;
     //printf("my generated no is %d\n",number);  
    do
    {
        printf("What is your guess-->");
        scanf("%d", &guess);
        if (number < guess)
        {
            printf("lower guess please!!\n");
        }
        else if (number > guess)
        {
            printf("Higher guess plz!!\n");
        }
        else
        {
            printf("you have guess the number %d in %d attempt\n", number, counter);
        }

        counter += 1;
    } while (number != guess);

    return 0;
}