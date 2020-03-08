#include"../include/Employee.h"
using namespace partime_cpp;

int main( void )
{
	Employee emp;
	emp.acceptRecord( );	//emp.acceptRecord( &emp );
	emp.printRecord( );	//emp.printRecord( &emp );
	return 0;
}
