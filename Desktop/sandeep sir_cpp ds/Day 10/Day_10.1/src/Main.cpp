#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
private:
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
public:
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
		cout<<endl;
	}
	friend int main( void );
};
int main( void )
{
	Complex c1(10,20);
	c1.printRecord();

	return 0;
}
