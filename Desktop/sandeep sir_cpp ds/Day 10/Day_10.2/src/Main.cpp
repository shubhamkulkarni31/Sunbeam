#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void )
	{
		this->real = 0;
		this->imag = 0;
	}
	Complex( int real, int imag )
	{
		this->real = real;
		this->imag = imag;
	}
private:
	Complex( const Complex &other )
	{
		cout<<"Complex( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
	}
public:
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
		cout<<endl;
	}
	static void test( void )
	{
		Complex c1(10,20);
		Complex c2 = c1;
	}
};
int main( void )
{
	//Complex c1(10,20);
	//Complex c2 = c1;

	Complex::test();
	return 0;
}
