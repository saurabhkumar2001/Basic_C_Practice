// multi dimensional array , array[3][4] ----> it means [rows]and[column] 
// it means that 3 rows and 4 columns
//WAP TO PRINT THE MARKS TAKEN FROM THE NUMBER OF STUDENTS!
#include<stdio.h>
int main()
{
int num_of_stud,subject;
printf("Lets enter the marks of students\n");
printf("Enter the number of students: \n");
scanf("%d",&num_of_stud);
printf("Enter the number of subjects: \n");
scanf("%d",&subject);
int marks[num_of_stud][subject];
for (int i = 0;i<num_of_stud;i++){
    for(int j = 0;j<subject;j++){
        printf("Enter the marks of the student %d in the subject %d\n",i+1,j+1);
        scanf("%d",&marks[i][j]);
    }
}

for (int i = 0;i<num_of_stud;i++){
    for(int j = 0;j<subject;j++){
        printf("the marks of the student %d in the subject %d is: %d \n",i+1,j+1,marks[i][j]);
    }
}
return 0;
}
