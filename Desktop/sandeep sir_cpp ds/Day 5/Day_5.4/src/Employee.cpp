#include<iostream>
#include<iomanip>
using namespace std;

#include"../include/Employee.h"
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
	cout<<"Salary	:	"<< fixed<< setprecision(2)<<this->salary<<endl;
}
