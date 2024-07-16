#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Employee
{
    int eid;
    float sal;
    struct Employee*link;
    struct Employee*plink;
    
    
};

int main()
{
struct Employee *emp =(struct Employee* )malloc(sizeof(struct Employee));
emp->eid=100;
emp->sal=450000;
emp->link=NULL;
emp->plink=NULL;
struct Employee *emp2 =(struct Employee* )malloc(sizeof(struct Employee));
emp2->eid=101;
emp2->sal=50000;
emp2->link=NULL;
emp->link=emp2;
struct Employee *emp3 =(struct Employee* )malloc(sizeof(struct Employee));
emp3->eid=102;
emp3->sal=450000;
emp3->link=NULL;
emp2->link=emp3;
emp3->plink=emp2;
printf("%0.2f",emp2->sal);
return 0;
}