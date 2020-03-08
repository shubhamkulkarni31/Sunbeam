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
		Employee( void )
		{
			this->name = "";
			this->empid = 0;
			this->salary = 0;
		}
		Employee( string name,  int empid, float salary)
		{
			this->name = name;
			this->empid = empid;
			this->salary = salary;
		}
		//Employee *const this = &emp
		void acceptRecord( void )
		{
			cout<<"Name	:	";
			cin>>this->name;
			cout<<"Empid	:	";
			cin>>this->empid;
			cout<<"Salary	:	";
			cin>>this->salary;
		}
		//Employee *const this = &emp
		void printRecord( void )
		{
			cout<<"Name	:	"<< this->name<<endl;
			cout<<"Empid	:	"<< this->empid<<endl;
			cout<<"Salary	:	"<< this->salary<<endl;
		}
	};//end of class
}//end of namespace
int main( void )
{
	Employee emp;
	emp.acceptRecord( );	//emp.acceptRecord( &emp );
	emp.printRecord( );	//emp.printRecord( &emp );
	return 0;
}
