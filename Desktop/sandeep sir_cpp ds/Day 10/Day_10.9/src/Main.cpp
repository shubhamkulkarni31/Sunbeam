#include<iostream>
using namespace std;

class Array
{
	int size;
	int *arr;
public:
	Array( void )
	{
		this->size = 0;
		this->arr = NULL;
	}
	Array( int size )
	{
		cout<<"Array( int size )"<<endl;
		this->size = size;
		this->arr = new int[ this->size ];
	}
	void acceptRecord( void )
	{
		for( int index = 0; index < 3; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>this->arr[ index ];
		}
	}
	void printRecord( void )
	{
		for( int index = 0; index < 3; ++ index )
		{
			cout<<this->arr[ index ]<<endl;
		}
	}
	~Array( void )
	{
		cout<<"~Array( void )"<<endl;
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};
class AutoPtr
{
private:
	Array *ptr;
public:
	AutoPtr( Array *ptr )
	{
		this->ptr = ptr;
	}
	Array* operator->( )
	{
		return this->ptr;
	}
	~AutoPtr( )
	{
		delete this->ptr;
	}
};
int main( void )
{
	auto_ptr<Array> obj( new Array( 3 ) );
	obj->acceptRecord();
	obj->printRecord();
	return 0;
}
int main2( void )
{
	AutoPtr obj( new Array( 3 ) );
	obj->acceptRecord();
	//obj.operator ->()->acceptRecord();
	obj->printRecord();
	//obj.operator ->()->printRecord();
	return 0;
}

int main1( void )
{
	Array *ptr = new Array( 3 );	//Array::Array( int )
	ptr->acceptRecord();
	ptr->printRecord();
	delete ptr;	//Array::~Array( );
	ptr = NULL;
	return 0;
}
