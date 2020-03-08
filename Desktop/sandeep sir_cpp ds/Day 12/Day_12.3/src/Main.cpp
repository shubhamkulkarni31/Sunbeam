#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( int real = 0, int imag = 0 );
	void print( void );
};
inline Complex::Complex( int real, int imag)
{
	this->real = real;
	this->imag = imag;
}
inline void Complex::print( void )
{
	cout<<"Real Number	:	"<<this->real<<endl;
	cout<<"Imag Number	:	"<<this->imag<<endl;
}
int main( void )
{
	Complex c1(10,20);
	c1.print();
	return 0;
}
