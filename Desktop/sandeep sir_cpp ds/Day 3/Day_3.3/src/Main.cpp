#include<cstdio>
class Employee
{
private:
	char name[ 50 ];
	int empId;
	float salary;
public:
	//Employee *const this = &emp
	void acceptRecord( void )
	{
		printf("Name	:	");
		scanf("%s", this->name);
		printf("Empid	:	");
		scanf("%d", &this->empId);
		printf("Salary	:	");
		scanf("%f", &this->salary);
	}
	//Employee *const this = &emp
	void printRecord( void )
	{
		printf("Name	:	%s\n", this->name );
		printf("Empid	:	%d\n", this->empId);
		printf("Salary	:	%f\n", this->salary);
	}
};
int main( void )
{
	Employee emp;
	emp.acceptRecord();	//emp.acceptRecord( &emp );
	emp.printRecord();	//emp.printRecord( &emp );
	return 0;
}
