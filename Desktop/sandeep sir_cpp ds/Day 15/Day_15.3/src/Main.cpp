#include<cstring>
#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
private:
	char name[ 30 ];
	int empid;
	float salary;
public:
	Employee( void )
	{
		strcpy(this->name, "");
		this->empid = 0;
		this->salary = 0;
	}
	Employee( const char *name, int empid, float salary )
	{
		strcpy(this->name, name);
		this->empid = empid;
		this->salary = salary;
	}
	friend istream& operator>>( istream &cin, Employee &other )
	{
		cout<<"Name	:	";
		cin>>other.name;
		cout<<"Empid	:	";
		cin>>other.empid;
		cout<<"Salary	:	";
		cin>>other.salary;
		return cin;
	}
	friend ostream& operator<<( ostream &cout, Employee &other )
	{
		cout<<other.name<<"	"<<other.empid<<"	"<<other.salary<<endl;
		return cout;
	}
};
void write_record( const char *filename )
{
	ofstream ofs;
	ofs.open(filename, ios_base::out | ios_base::binary );
	if( ofs.is_open( ) )
	{
		Employee emp;
		cin>>emp;
		ofs.write(reinterpret_cast<char*>( &emp), sizeof( emp ) );
		ofs.close();
	}
	else
		cout<<"File IO error."<<endl;
}
void read_record( const char *filename )
{
	ifstream ifs;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Write Record"<<endl;
	cout<<"2.Read Record"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice;
	const char *filename = "Employee.db";
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		switch( choice )
		{
		case 1:
			::write_record(filename);
			break;
		case 2:
			::read_record(filename);
			break;
		}
	}
	return 0;
}
