#include<stdio.h>
struct Employee
{
	char name[ 50 ];
	int empid;
	float salary;

	void accept_record( void )
	{
		printf("Name	:	");
		scanf("%s", name);
		printf("Empid	:	");
		scanf("%d", &empid);
		printf("Salary	:	");
		scanf("%f", &salary);
	}

	void print_record( void )
	{
		printf("Name	:	%s\n", name );
		printf("Empid	:	%d\n", empid);
		printf("Salary	:	%f\n", salary);
	}
};
int main( void )
{
	Employee emp;

	emp.accept_record( );	//emp.accept_record( &emp );

	emp.salary = -50000;

	emp.print_record( );	//emp.print_record( &emp );
	return 0;
}
