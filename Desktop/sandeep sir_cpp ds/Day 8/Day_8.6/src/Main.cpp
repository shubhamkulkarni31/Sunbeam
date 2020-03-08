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
	void acceptRecord( void )
	{
		cout<<"Real Number	:	";
		cin>>this->real;
		cout<<"Imag Number	:	";
		cin>>this->imag;
	}
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex *ptr = new Complex[ 3 ];

	for( int index = 0; index < 3; ++ index )
		ptr[ index ].acceptRecord();

	for( int index = 0; index < 3; ++ index )
		ptr[ index ].printRecord();

	delete[] ptr;
	ptr = NULL;
	return 0;
}
int main3( void )
{
	Complex arr[ 3 ];

	for( int index = 0; index < 3; ++ index )
		arr[ index ].acceptRecord();

	for( int index = 0; index < 3; ++ index )
		arr[ index ].printRecord();

	return 0;
}
int main2( void )
{
	Complex c1(10,20);
	c1.printRecord();

	Complex *ptr = new Complex( 11,22);
	ptr->printRecord();
	delete ptr;
	return 0;
}

int main1( void )
{
	Complex c1;
	c1.acceptRecord();
	c1.printRecord();

	Complex *ptr = new Complex( );
	ptr->acceptRecord();
	ptr->printRecord();
	delete ptr;
	return 0;
}
