		#pragma pack(1)
#include<stdio.h>
int main( void )
{
	struct Employee
	{
		char name[ 50 ];
		int empid;
		float salary;
	};
	struct Employee emp;	//OK

	//struct Employee emp = { "Sandeep", 33, 45000.50f };

	printf("Name	:	");
	scanf("%s", emp.name);
	printf("Empid	:	");
	scanf("%d", &emp.empid);
	printf("Salary	:	");
	scanf("%f", &emp.salary);

	printf("Name	:	%s\n", emp.name );
	printf("Empid	:	%d\n", emp.empid);
	printf("Salary	:	%f\n",emp.salary);
	return 0;
}
