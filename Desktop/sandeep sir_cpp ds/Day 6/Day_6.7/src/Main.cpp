#include<iostream>
using namespace std;

#include"../include/Complex.h"
using namespace ncomplex;
void accept_record( Complex &c1 )throw( IllegalArgumentException )
{
	int real;
	cout<<"Enter real number	:	";
	cin>>real;
	c1.setReal( real );

	int imag;
	cout<<"Enter imag number	:	";
	cin>>imag;
	c1.setImag( imag );
}
void print_record( Complex  &c1 )throw( )
{
	int  real = c1.getReal( );
	cout<<"Real Number	:	"<<real<<endl;
	int imag = c1.getImag( );
	cout<<"Imag Number	:	"<<imag<<endl;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Accept Record"<<endl;
	cout<<"2.Print Record"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice;
	Complex c1;
	while ( ( choice = ::menu_list( ) ) != 0 )
	{
		try
		{
			switch( choice )
			{
			case 1:
				::accept_record(c1);
				break;
			case 2:
				::print_record(c1);
				break;
			}
		}
		catch(IllegalArgumentException &ex )
		{
			cout<<ex.getMessage()<<endl;
		}
	}
	return 0;
}
