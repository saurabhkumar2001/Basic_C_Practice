#include <stdio.h>
#include<stdlib.h>
void update(int *a,int *b);
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
void update(int *a,int *b){
    int add,sub;
    add = abs(*a + *b);
    sub = abs(*a - *b);
    *a = add;
    *b = sub;
}