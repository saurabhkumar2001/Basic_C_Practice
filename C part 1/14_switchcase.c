//WAP TO CONVERT THE GIVEN MARKS IN THE GRADES
#include<stdio.h>
int main()
{
int marks;
    printf("Enter the marks \n");
    scanf("%d",&marks);
    switch(marks){
        case 90:
        printf("your grade is A");
        break;
        case 80:
        printf("your grade is B");
        break;
        case 70:
        printf("your grade is C");
        break;
        case 60:
        printf("your grade is D");
        break;
        case 50:
        printf("your grade is E");
        break;
        case 40:
        printf("Your grade is f");
        break;
        default:
        printf("try again");
        break;
    }
return 0;
}