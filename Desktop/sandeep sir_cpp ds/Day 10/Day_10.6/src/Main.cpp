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

class Array
{
private:
	int size;
	int *arr;
public:
	Array( void ) : size( 0 ), arr( NULL )
	{	}
	Array( int size )
	{
		this->size = size;
		this->arr = new int[ this->size ];
	}
	Array( const Array &other )
	{
		this->size = other.size;
		this->arr = new int[ this->size ];
		memcpy(this->arr, other.arr, this->size * sizeof( int ) );
	}
	//Array *const this = &a1
	int& operator[]( int index )throw( ArrayIndexOutOfBoundsException )
	{
		if( index >= 0 && index < this->size )
			return this->arr[ index ];
		throw ArrayIndexOutOfBoundsException("Array Index Out Of Bounds Exception");
	}
	~Array( void )
	{
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
	friend istream& operator>>( istream &cin, Array &other );
	friend ostream& operator<<( ostream &cout, Array &other );
};
istream& operator>>( istream &cin, Array &other )
{
	for( int index = 0; index < other.size; ++ index )
	{
		cout<<"Enter element	:	";
		cin>>other.arr[ index ];
	}
	return cin;
}
ostream& operator<<( ostream &cout, Array &other )
{
	for( int index = 0; index < other.size; ++ index )
		cout<<other.arr[ index ]<<endl;
	return cout;
}
int main( void )
{
	Array a1( 3 );
	cin>>a1;	//operator>>( cin, a1 );
	Array a2 = a1;	//on a2 copy ctor will call
	cout<<a2;	//operator<<( cout, a2 );
}
int main2( void )
{
	try
	{
		Array a1( 5 );
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
