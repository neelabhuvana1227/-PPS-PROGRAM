#include<stdio.h>
struct employee_details
{
	char name[30];
	int employ_id;
	float salary;
}e;
void main()
{
	struct employee_details e1,e2;
	printf("enter the name of first employee");
	gets(e1.name);
	puts(e1.name);
	printf("\n enter employ_id,salary of first employe");
	scanf("%d%f",&e1.employe_id,&e1.salary);
        printf(" %d  %f ,e1.employ_id,e1.salary");

