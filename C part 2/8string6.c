#include<stdio.h>
int main()
{
char *ptr = "saurabh bhai"; //in this the value stored in the memory location and can be replaced 
ptr = "priya sharma";
char ptr[] = "saurabh bhai";
char ptr[] = "priya sharma";   // so the value stored in the string does not replaced 
printf("%s", ptr);
return 0;
}s

// this is the basic diff b/w the implementation of the string through pointer and through the array