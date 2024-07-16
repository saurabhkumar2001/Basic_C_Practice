//it is user defined data type that can store all the data type is called structure
//a structure is defined in two mode:-
/* 1. type defined
   2. Variable of type*/
   #include<stdio.h>
   #include<string.h>
   struct employee {
      int eid;
      char name[20];
      float sal;
      char work[50];
      char address[50];
      char Eno[10];
   }emp1;
   int i , j;
   int main()
   {
      struct employee employees[1000];  //we can use the short name emp rather than struct employee
      int i;
      int eid;
      char name[20],address[50],Eno[10];
      float sal;
      for (i=0;i<5;i++){
        printf("Enter eid ");
        scanf("%d",&eid);
        fflush(stdin);
        printf("Enter name ");
        gets(name);
        printf("Enter salary ");
        scanf("%f",&sal);
        fflush(stdin);
        printf("Enter address");
        gets(address);
        fflush(stdin);
        printf("Enter contactno");
        gets(Eno);
        struct employee emp;
        emp.eid = eid;
        strcpy(emp.name,name);
        emp.sal = sal;
        strcpy(emp.address,address);
        strcpy(emp.Eno,Eno);
        employees[i]=emp;
      }
      printf("**********************************************************************************\n");
      printf("      GOOGLE       \n");
      printf("Enter the eid for search")
   for(i=0;i<5;i++){
   printf("\nEmp Details\nEid:%d\nName:%s\nsal:%f\nAddress:%s\nContactno:%s\n",employees[i].eid,employees[i].name,employees[i].sal,employees[i].address,employees[i].Eno);
   }
   return 0;
   }