#include<stdio.h>
int find_the_sum(int n,int a,int b,int c)
{
    if(n == 1){
        return a;
    }

    else if(n == 2){
        return b;
    }

    else if(n == 3){
        return c;
    }
    else
    {
        return find_the_sum(n-1,a,b,c)+find_the_sum(n-2,a,b,c)+find_the_sum(n-3,a,b,c);
    }
    

}

int main(){
    int n,c,a,b;
    scanf("%d %d %d %d ",&n,&a,&b,&c);
    int ans = find_the_sum(n,a,b,c);
    printf("the sum is %d",ans);

return 0;
}