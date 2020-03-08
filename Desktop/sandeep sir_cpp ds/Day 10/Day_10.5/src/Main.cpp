#include<string>
#include<iostream>
using namespace std;
class ArrayIndexOutOfBoundsException
{
private:
	string message;
public:
	ArrayIndexOutOfBoundsException( string message )
	{
		this->message = message;
	}
	string getMessage( void )const
	{
		return this->message;
	}
};
#define SIZE	3
class Array
{
private:
	int arr[ SIZE ];
public:
	//Array *const this = &a1
	int& operator[]( int index )throw( ArrayIndexOutOfBoundsException )
	{
		if( index >= 0 && index < SIZE )
			return this->arr[ index ];
		throw ArrayIndexOutOfBoundsException("Array Index Out Of Bounds Exception");
	}
	friend istream& operator>>( istream &cin, Array &other );
	friend ostream& operator<<( ostream &cout, Array &other );
};
istream& operator>>( istream &cin, Array &other )
{
	for( int index = 0; index < SIZE; ++ index )
	{
		cout<<"Enter element	:	";
		cin>>other.arr[ index ];
	}
	return cin;
}
ostream& operator<<( ostream &cout, Array &other )
{
	for( int index = 0; index < SIZE; ++ index )
		cout<<other.arr[ index ]<<endl;
	return cout;
}
int main( void )
{
	try
	{
		Array a1;
		cin>>a1;	//operator>>( cin, a1 );
		a1[ 1 ] = 200;
		//a1.operator[]( 1 ) = 200;
		cout<<a1;	//opeator<<( cout, a1 );
	}
	catch( ArrayIndexOutOfBoundsException &ex )
	{
		cout<<ex.getMessage()<<endl;
	}
	return 0;
}

int main1( void )
{
	try
	{
		Array a1;
		cin>>a1;	//operator>>( cin, a1 );
		cout<<a1;	//opeator<<( cout, a1 );
		int element = a1[ 2 ]; //int element = a1.operator[]( 1 );
		cout<<"Element is	:	"<<element<<endl;
	}
	catch( ArrayIndexOutOfBoundsException &ex )
	{
		cout<<ex.getMessage()<<endl;
	}
	return 0;
}
