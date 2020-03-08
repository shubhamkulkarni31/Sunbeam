#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( int real = 0, int imag = 0 );

	void printRecord( void );
};
Complex::Complex( int real, int imag ) : real( real ), imag( imag )
{	}
void Complex::printRecord( void )
{
	cout<<"Real Number	:	"<<this->real<<endl;
	cout<<"Imag Number	:	"<<this->imag<<endl;
}
int main( void )
{
	Complex c1(10,20);
	c1.printRecord();	//10,20
	Complex c2(30);
	c2.printRecord();	//30,0
	Complex c3;
	c3.printRecord();	//0,0
	return 0;
}
