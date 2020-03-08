#include<iostream>
#include<string>
using namespace std;

namespace partime_cpp
{
	class Employee
	{
	private:
		string name;
		int empid;
		float salary;
	public:
		Employee( void );

		Employee( string name,  int empid, float salary);

		void acceptRecord( void );

		void printRecord( void );
	};//end of class
}//end of namespace

using namespace partime_cpp;
Employee::Employee( void )
{
	this->name = "";
	this->empid = 0;
	this->salary = 0;
}
Employee::Employee( string name,  int empid, float salary)
{
	this->name = name;
	this->empid = empid;
	this->salary = salary;
}

void Employee::acceptRecord( void )
{
	cout<<"Name	:	";
	cin>>this->name;
	cout<<"Empid	:	";
	cin>>this->empid;
	cout<<"Salary	:	";
	cin>>this->salary;
}
void Employee::printRecord( void )
{
	cout<<"Name	:	"<< this->name<<endl;
	cout<<"Empid	:	"<< this->empid<<endl;
	cout<<"Salary	:	"<< this->salary<<endl;
}

int main( void )
{
	Employee emp;
	emp.acceptRecord( );	//emp.acceptRecord( &emp );
	emp.printRecord( );	//emp.printRecord( &emp );
	return 0;
}
