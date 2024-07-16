// Given a sentence,s , print each word of the sentence in a new line

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    //Write your logic to print the tokens of the sentence here.
    int i =0;
    while(s[i] != '\0'){
        if(s[i] != ' '){
            printf("%c",s[i]);
        }
        else
        {
            printf("\n");
        }
        i++;
    }

    return 0;
}