#include<stdio.h>
class Employee
{
private:
	char name[ 50 ];
	int empId;
	float salary;
public:
	void acceptRecord( void )
	{
		printf("Name	:	");
		scanf("%s", name);
		printf("Empid	:	");
		scanf("%d", &empId);
		printf("Salary	:	");
		scanf("%f", &salary);
	}

	void printRecord( void )
	{
		printf("Name	:	%s\n", name );
		printf("Empid	:	%d\n", empId);
		printf("Salary	:	%f\n", salary);
	}
};
int main( void )
{
	Employee emp;
	emp.Employee::acceptRecord();	//OK
	emp.Employee::printRecord();	//OK
	return 0;
}
int main1( void )
{
	Employee emp;
	emp.acceptRecord();	//Message Passing
	emp.printRecord();	//Message Passing
	return 0;
}
