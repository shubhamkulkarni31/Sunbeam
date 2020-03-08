#include<iostream>
using namespace std;

int main( void )
{
	int count = 1000000000000;
	int *ptr = new ( nothrow ) int[ count ];
	if( ptr == NULL )
		cout<<"NULL"<<endl;
	else
		cout<<ptr<<endl;
	delete[] ptr;
	return 0;
}
int main3( void )
{
	int count = 1000000000000;
	int *ptr = new int[ count ];
	if( ptr == NULL )
		cout<<"NULL"<<endl;
	else
		cout<<ptr<<endl;
	delete[] ptr;
	return 0;
}
int main2( void )
{
	int *ptr = new int[ 3 ];

	for( int index = 0; index < 3; ++ index )
	{
		cout<<"Enter element	:	";
		cin>>ptr[ index ];
	}
	for( int index = 0; index < 3; ++ index )
		cout<<ptr[ index ]<<endl;

	delete[] ptr;
	ptr = NULL;
	return 0;
}

int main1( void )
{
	int *ptr = new int[ 3 ];
	//int *ptr = ( int *)::operator new[](3 * sizeof( int ) );

	ptr[ 0 ] = 10;
	ptr[ 1 ] = 20;
	ptr[ 2 ] = 30;
	for( int index = 0; index < 3; ++ index )
		cout<<ptr[ index ]<<endl;

	delete[] ptr;
	//::operator delete( ptr );
	ptr = NULL;
	return 0;
}
