#include<stdio.h>
int countdigit(int);
int main()
{
    int n,count=0;
    printf("Ener the number ");
    scanf("%d",&n);
    count=countdigit(n);
    printf("no of digit %3d \n",count);

return 0;
}
    int countdigit(int n)
    {
        static int count=0;
        if(n>0)
        {
        count++;
     countdigit(n/10);
        }
    else 
    {
        return count;
    }
}