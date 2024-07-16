#include<stdio.h>
int main()
{
int arr[2][2];
int *ptr;
ptr = &arr[0][0];

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("Enter the value in %d row and %d column:  ",i+1,j+1);
        scanf("%d",ptr);
        ptr++;

    }
}
     for(int i=0;i<2;i++){
        for(int j =0;j<2;j++){
            printf("%d\t",*(ptr+i+j));
            ptr++;
        }
        printf("\n");
    }
    return 0;
}


