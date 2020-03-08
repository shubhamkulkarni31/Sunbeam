#include<iostream>
using namespace std;
class Base
{
private:
	int num1;
public:
	Base( void ) : num1( 0 )
	{	}
	friend class Derived;
};
class Derived : public Base
{
private:
	int num2;
public:
	Derived( void ) : num2( 0 )
	{	}
	void setValue( int num1, int num2 )
	{
		this->num1 = num1;
		this->num2 = num2;
	}
	void print( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
};
int main( void )
{
	Derived derived;
	derived.setValue(10, 20);
	derived.print();
	return 0;
}
