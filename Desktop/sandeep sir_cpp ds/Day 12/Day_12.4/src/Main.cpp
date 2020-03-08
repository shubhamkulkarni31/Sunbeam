#include<iostream>
#include<string>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date( void )
	{
		this->day = 0;
		this->month = 0;
		this->year = 0;
	}
	Date( int day, int month, int year )
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void printRecord( void )
	{
		cout<<this->day<<" / "<<this->month<<" / "<<this->year<<endl;
	}
};
class Employee
{
private:
	string name;	//Association
	int empid;
	float salary;
	Date joinDate;	//Association
public:
	Employee( void )
	{
		this->empid = 0;
		this->salary = 0;
	}
	Employee( string name, int empid, float salary )
	{
		this->name = name;
		this->empid = empid;
		this->salary = salary;
	}
	Employee( string name, int empid, float salary, Date joinDate  )
	{
		this->name = name;
		this->empid = empid;
		this->salary = salary;
		this->joinDate = joinDate;
	}
	Employee( string name, int empid, float salary, int day, int month, int year  ) : joinDate( day, month, year )
	{
		this->name = name;
		this->empid = empid;
		this->salary = salary;
	}
	void printRecord( void )
	{
		cout<<"Name	:	"<<this->name<<endl;
		cout<<"Empid	:	"<<this->empid<<endl;
		cout<<"Salary	:	"<<this->salary<<endl;
		cout<<"Join Date	:	";
		this->joinDate.printRecord();
	}
};
int main( void )
{

	Employee emp( "Sandeep", 33, 12345, 26,12,2006);

	emp.printRecord();
	return 0;
}
int main2( void )
{
	string name = "Sandeep";
	int empid = 33;
	float salary = 12345;

	Employee emp( name, empid, salary);

	emp.printRecord();
	return 0;
}

int main1( void )
{
	string name = "Sandeep";
	int empid = 33;
	float salary = 12345;
	Date joinDate(26,12,2006);

	Employee emp( name, empid, salary, joinDate );

	emp.printRecord();
	return 0;
}
