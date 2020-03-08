#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

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

#endif /* EMPLOYEE_H_ */
