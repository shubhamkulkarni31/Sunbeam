#include<cstring>
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
	// Complex &other = c1
	//Complex *const this = c2
	Complex( const Complex &other )
	{
		cout<<"Complex( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
	}

	// Complex &other = c1
	//Complex *const this = c2
	/*Complex( const Complex &other ) : real( other.real ), imag( other.imag )
	{
		cout<<"Complex( const Complex &other )"<<endl;
	}*/

	// Complex &other = c1
	//Complex *const this = c2
	/*Complex( const Complex &other )
	{
		cout<<"Complex( const Complex &other )"<<endl;
		memcpy(this, &other, sizeof( Complex ) ) ;
	}*/
	Complex( int real, int imag )
	{
		cout<<"Complex( int real, int imag )"<<endl;
		this->real = real;
		this->imag = imag;
	}
	//Complex *const this = &c1
	Complex sum( Complex other )
	{
		Complex temp;
		temp.real = this->real + other.real;
		temp.imag = this->imag + other.imag;
		return temp;
	}
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex c1(10,20); //On c1 object parameterized ctor will call.
	Complex c2 = c1;	//On c2 object copy ctor will call.
	Complex c3( c1 );	//On c3 object copy ctor will call.
	return 0;
}
int main6( void )
{
	Complex c1(10,20); //On c1 object parameterized ctor will call.
	Complex c2;	//On c2 object parameterless ctor will call.
	c2 = c1;	//on c2 object assignment operator function will call
	return 0;
}
int main5( void )
{
	Complex  c1(10,20); //On c1 object parameterized ctor will call.
	Complex &c2 = c1;	//Compiler do not call constructor on reference.
	return 0;
}
int main4( void )
{
	Complex  c1(10,20); //On c1 object parameterized ctor will call.
	Complex *ptr = &c1;	//Compiler do not call constructor on pointer.
	return 0;
}
int main3( void )
{
	try
	{
		Complex c1;
		throw c1;
	}
	catch( Complex &ex )
	{

	}
	return 0;
}
int main1( void )
{
	Complex c1( 10, 20 );
	Complex c2 = c1;
	c2.printRecord();
	return 0;
}

int main2( void )
{
	Complex c1( 10, 20 );
	Complex c2( 30, 40 );
	Complex c3;
	c3 = c1.sum( c2 );
	c3.printRecord( );
	return 0;
}
