#include<iostream>
#include<string>
using namespace std;
class ArithmeticException
{
private:
	string message;
public:
	ArithmeticException( string message ) : message( message )
	{	}
	void printStackTrace( void )const
	{
		cout<<this->message<<endl;
	}
};
void accept_record( int &number )
{
	cout<<"Enter number	:	";
	cin>>number;
}
void print_record( int &result )
{
	cout<<"Result	:	"<<result<<endl;
}
int main( void )
{
	cout<<"File Open()"<<endl;
	int num1;
	::accept_record( num1 );

	int num2;
	::accept_record( num2 );
	try
	{
		if( num2 == 0 )
		{
			ArithmeticException ex("Divide by zero exception");
			throw ex;
		}
		int result = num1 / num2;
		::print_record( result );
	}
	catch( ArithmeticException &ex )
	{
		ex.printStackTrace();
	}
	catch(...)
	{
		cout<<"Generic catch block"<<endl;
	}
	cout<<"File Close()"<<endl;
	return 0;
}
