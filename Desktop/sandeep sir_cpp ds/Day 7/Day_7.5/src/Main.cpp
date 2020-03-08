#include<iostream>
using namespace std;

class A
{
public:
	void sum( void );
};
class B
{
private:
	int num1;
	int num2;
public:
	B( void );
	friend void A::sum( void );
};
B::B( void )
{
	this->num1 = 10;
	this->num2 = 20;
}
void A::sum( void )
{
	B obj;
	int result = obj.num1 + obj.num2;
	cout<<"Result	:	"<<result<<endl;
}
int main( void )
{
	A a;
	a.sum();
	return 0;
}
