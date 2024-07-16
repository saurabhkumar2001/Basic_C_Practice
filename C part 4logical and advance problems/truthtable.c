//wap a programme in c to disply the boolean truth table for and or not 
#include<stdio.h>
#include<stdlib.h>
int printand();
int printor();
int printnot();
int main()
{
    printand();
    printor();
    printnot();
return 0;
}
int printand(){
    int a[5] = {1,0,1,0,1};
    int b[5] = {0,1,1,0,0};
    int i, and_ans;
    printf("Boolean table for and");
    for ( i = 0; i < 5; i++)
    {
        and_ans = a[i] & b[i];
        printf("\n %d AND %d  = %d",a[i],b[i],and_ans);
    }
    printf("\n\n");
    return 0;
    
}
int printor(){
    int a[5] = {1,0,1,0,1};
    int b[5] = {0,1,1,0,0};
    int i, or_ans;
    printf("Boolean table for and");
    for ( i = 0; i < 5; i++)
    {
        or_ans = a[i] || b[i];
        printf("\n %d OR %d  = %d",a[i],b[i],or_ans);
    }
    printf("\n\n");
    return 0;
    
}
int printand(){
    int a[5] = {1,0,1,0,1};
    int b[5] = {0,1,1,0,0};
    int i, ans;
    printf("Boolean table for and");
    for ( i = 0; i < 5; i++)
    {
        ans = !(a[i]);
        printf("\n NOT %d  = %d",a[i],ans);
    }
    printf("\n\n");
    return 0;
    
}