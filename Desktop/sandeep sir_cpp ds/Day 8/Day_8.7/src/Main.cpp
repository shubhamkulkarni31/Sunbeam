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
		cout<<"Array( void ) : "<<this<<endl;
		this->size = 0;
		this->arr = NULL;
	}
	Array( int size )
	{
		cout<<"Array( int size )"<<endl;
		this->size = size;
		this->arr = new int[ size ];
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
	/*~Array( void )
	{
		cout<<"~Array( void ) : "<<this<<endl;
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}*/
};
int main( void )
{
	Array a1;


	return 0;
}
