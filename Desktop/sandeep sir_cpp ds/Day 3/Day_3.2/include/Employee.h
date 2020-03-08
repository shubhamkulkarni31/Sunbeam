
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee
{
private:
	char name[ 50 ];
	int empId;
	float salary;
public:
	void acceptRecord( void );

	void printRecord( void );
};

#endif /* EMPLOYEE_H_ */
