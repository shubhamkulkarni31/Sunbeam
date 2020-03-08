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
int main( void )
{
	try
	{
		try
		{
			throw ArithmeticException("/ by zero");
		}
		catch( ArithmeticException  &ex)
		{
			cout<<"Inside inner catch"<<endl;
			throw;	//throw ex;
		}
	}
	catch( ArithmeticException &ex)
	{
		cout<<"Inside outer catch"<<endl;
		//ex.printStackTrace();
	}
	catch(...)
	{
		cout<<"Inside generic catch block"<<endl;
	}
	return 0;
}
