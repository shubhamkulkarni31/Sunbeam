#include<stdio.h>
struct Employee
{
	char name[ 50 ];
	int empid;
	float salary;
};
void accept_record( struct Employee *ptr )
{
	printf("Name	:	");
	scanf("%s", ptr->name);
	printf("Empid	:	");
	scanf("%d", &ptr->empid);
	printf("Salary	:	");
	scanf("%f", &ptr->salary);
}
void print_record( struct Employee *ptr )
{
	printf("Name	:	%s\n", ptr->name );
	printf("Empid	:	%d\n", ptr->empid);
	printf("Salary	:	%f\n",ptr->salary);
}
int main( void )
{
	struct Employee emp;

	accept_record( &emp );

	print_record( &emp );
	return 0;
}
