#include<stdio.h>
void goodafternoon();
void goodmorning();
void goodnight();

int main()
{
    printf("good morning function returns -->");
    goodmorning();
    printf("good afternoon function returns -->");
    goodafternoon();
    printf("good night function returns -->");
    goodnight();

return 0;
}
void goodmorning(){
    printf("GOOD MORNING\n");
}
void goodafternoon(){
    printf("GOOD AFTERNOON\n");
}void goodnight(){
    printf("GOOD NIGHT\n");
}