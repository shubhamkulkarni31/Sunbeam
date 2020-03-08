#include<cstring>
#include<iostream>
using namespace std;
class Array
{
private:
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
		this->size = size;
		this->arr = new int[ this->size ];
	}
	//Array *const this = &a2;
	// const Array &other = a1
	Array( const Array &other )
	{
		cout<<"Array( const Array &other )"<<endl;
		this->size = other.size;
		this->arr = new int[ this->size ];
		memcpy(this->arr, other.arr, sizeof( int ) * this->size );
	}
	void acceptRecord( void )
	{
		for( int index = 0; index < this->size; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>this->arr[ index ];
		}
	}
	void printRecord( void )
	{
		for( int index = 0; index < this->size; ++ index )
			cout<<this->arr[ index ]<<endl;
	}
	~Array( void )
	{
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};
int main( void )
{
	Array a1( 3 );
	a1.acceptRecord();
	Array a2 = a1;
	a2.printRecord();

	return 0;
}
