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
		cout<<"Complex( void )"<<endl;
		this->real = 0;
		this->imag = 0;
	}
	explicit Complex( int value )
	{
		cout<<"Complex( int value )"<<endl;
		this->real = value;
		this->imag = value;
	}
	Complex( int real, int imag )
	{
		cout<<"Complex( int real, int imag )"<<endl;
		this->real = real;
		this->imag = imag;
	}
	Complex& operator=( const Complex &other )
	{
		cout<<"Complex& operator=( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
		return *this;
	}
	operator int( void )
	{
		return this->real;
	}
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	int number = 10;
	Complex c1;
	c1 = (Complex) number;
	c1.printRecord();
	return 0;
}
