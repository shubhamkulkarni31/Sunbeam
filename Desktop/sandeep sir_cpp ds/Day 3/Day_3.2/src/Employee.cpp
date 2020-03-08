#include<cstdio>
#include"../include/Employee.h"
void Employee::acceptRecord( void )
{
	printf("Name	:	");
	scanf("%s", name);
	printf("Empid	:	");
	scanf("%d", &empId);
	printf("Salary	:	");
	scanf("%f", &salary);
}

void Employee::printRecord( void )
{
	printf("Name	:	%s\n", name );
	printf("Empid	:	%d\n", empId);
	printf("Salary	:	%f\n", salary);
}
