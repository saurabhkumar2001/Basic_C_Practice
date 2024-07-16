#include<stdio.h>
#include<string.h>
struct Employee
{
    int eid;
    char name[20];
    float sal;
    struct DOB{
        int dd;
        int mm;
        int yyyy;

    }dob;
};

int main()
{
    struct Employee emp = {101,"saurabh",500000,{12,10,2004}};
    printf("EMployee Details EID: %d\n Name: %s\n SAl: %f \nDOB %d/%d/%d",emp.eid,emp.name,emp.sal,emp.dob.dd,emp.dob.mm,emp.dob.yyyy);
return 0;
}