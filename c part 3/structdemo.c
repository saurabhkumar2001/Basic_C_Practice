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
   }emp1,emp2;
   int i , j;
   int main()
   {
       typedef struct employee Emp;  //we can use the short name emp rather than struct employee
      Emp emp1,emp2;
      emp1.eid = 101;
      strcpy(emp1.name,"saurabh kumar jha");
      emp1.sal = 100000;
      strcpy(emp1.address,"delta 1");
      strcpy(emp1.work,"senoir developer");
      printf("$$$$ GOOGLE  $$$$$");
   printf("\nEmp Details\nEid:%d\nName:%s\nsal:%f\nAddress:%s\nDesignation:%s\n",emp1.eid,emp1.name,emp1.sal,emp1.address,emp1.work);
      emp2.eid = 101;
      strcpy(emp1.name,"saurabh kumar jha");
      emp2.sal = 100000;
      strcpy(emp2.address,"delta 1");
      strcpy(emp2.work,"senoir developer");
      printf("$$$$ GOOGLE  $$$$$");
   printf("\nEmp Details\nEid:%d\nName:%s\nsal:%f\nAddress:%s\nDesignation:%s\n",emp2.eid,emp2.name,emp2.sal,emp2.address,emp2.work);

   
   return 0;
   }