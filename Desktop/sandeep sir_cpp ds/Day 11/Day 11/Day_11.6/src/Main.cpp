#include<iostream>
using namespace std;

template<class T>
class Array // Parameterized type / Meta class
{
private:
	int size;
	T *arr;
public:
	Array( void );
	Array( int size );
	void acceptRecord( void );
	void printRecord( void );
	~Array( void );
};
template<class T>
Array<T>::Array( void )
{
	this->size = 0;
	this->arr = NULL;
}
template<class T>
Array<T>::Array( int size )
{
	this->size = size;
	this->arr = new T[ this->size ];
}
template<class T>
void Array<T>::acceptRecord( void )
{
	for( int index = 0; index < this->size; ++ index )
	{
		cout<<"Enter element	:	";
		cin>>this->arr[ index ] ;
	}
}
template<class T>
void Array<T>::printRecord( void )
{
	for( int index = 0; index < this->size; ++ index )
		cout<<this->arr[ index ] <<endl;
}
template<class T>
Array<T>::~Array( void )
{
	if( this->arr != NULL )
	{
		delete[] this->arr;
		this->arr = NULL;
	}
}
int main( void )
{
	Array<char> a1( 3 );
	a1.acceptRecord();
	a1.printRecord();
	return 0;
}
