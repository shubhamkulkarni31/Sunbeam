#include<stdio.h>
#include<stdlib.h>
int main( void )
{
	struct Employee
	{
		char name[ 50 ];
		int empid;
		float salary;
	};

	struct Employee *ptr = ( struct Employee* ) malloc( sizeof( struct Employee ) );

	printf("Name	:	");
	scanf("%s", ptr->name);
	printf("Empid	:	");
	scanf("%d", &ptr->empid);
	printf("Salary	:	");
	scanf("%f", &ptr->salary);

	printf("Name	:	%s\n", ptr->name );
	printf("Empid	:	%d\n", ptr->empid);
	printf("Salary	:	%f\n",ptr->salary);

	free( ptr );
	return 0;
}
