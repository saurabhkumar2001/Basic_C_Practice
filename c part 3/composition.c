#include<stdio.h>
#include<string.h>
struct address{
    int houseno;
    char area[20];
    char city[20];
    char state[20];
    char pin[6]; 
};
struct student{
    int rollno;
    char name[20];
    float per;
    struct address addr;

};
struct employees{
    int eid;
    char name[20];
    float sal;
    struct address addr;

};
int main()
{
    struct address add={101,"cp","Delhi","delhi","121003"};
    printf("\nHouseno %d\n Area %s\n City %s\n State %s\n Pin %s\n",add.houseno,add.area,add.city,add.state,add.pin);
    struct address *add2 = &add;
    printf("%d",add2-> houseno);
    (*add2).houseno=700;
    printf("\n%d",add.houseno);
 

    // struct student stud = {112,"saurabh",99.99,add};
    // printf("\n Rollno %d\n Name %s\n Percentage%f\n ADDRESS %d %s %s %s %s\n",
    // stud.rollno,stud.name,stud.per,stud.addr.houseno,stud.addr.city,stud.addr.area,stud.addr.state,stud.addr.pin);
    // struct employees emp = {8908,"saurabh",150000.00,add};
    // printf("\n EMP ID %d\n Emp name %s\n Emp sal%f\n Emp add %d %s %s %s %s\n",emp.eid,emp.name,emp.sal,
    // emp.addr.houseno,emp.addr.area,emp.addr.city,emp.addr.state,emp.addr.pin);

return 0;
}