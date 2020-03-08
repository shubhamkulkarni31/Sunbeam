#include<iostream>
using namespace std;

int main( void )
{
	int *ptr = new int;
	//int *ptr = ( int* )::operator new( sizeof( int ) * 1 );

	*ptr = 125;	//Dereferencing
	cout<<"Value	:	"<<*ptr<<endl; //Dereferencing

	delete ptr;
	//::operator delete( ptr );

	ptr = NULL;
	return 0;
}
