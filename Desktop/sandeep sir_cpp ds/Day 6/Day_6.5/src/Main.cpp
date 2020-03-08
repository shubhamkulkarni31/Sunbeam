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
void accept_record( int &number )throw( )
{
	cout<<"Enter number	:	";
	cin>>number;
}
int calculate( int num1, int num2 )throw( ArithmeticException )
{
	if( num2 == 0 )
		throw ArithmeticException("Divide by zero exception");
	return num1 / num2;
}
void print_record( int &result )throw( )
{
	cout<<"Result	:	"<<result<<endl;
}
int main( void )
{
	int num1;
	::accept_record( num1 );

	int num2;
	::accept_record( num2 );
	try
	{
		int result = ::calculate(num1, num2);
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
	return 0;
}
 