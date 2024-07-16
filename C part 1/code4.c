// wap to print the number in the vertical lines
#include<stdio.h>
int main()
{int c=1;
for(int i =0;i<5;i++){
    c=i+1;
    for(int j = 1;j<=5;j++){
        printf(" %d\t",c);
        c+=5;
    }
    printf("\n");

}
return 0;
}