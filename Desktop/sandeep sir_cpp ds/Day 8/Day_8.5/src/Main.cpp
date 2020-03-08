#include<iostream>
using namespace std;

int main( void )
{
	int **ptr = new int*[ 3 ];
	for( int index = 0; index < 3; ++ index )
		ptr[ index ] = new int[ 4 ];

	for( int i = 0; i < 3; ++ i )
	{
		for( int j = 0; j < 4; ++ j )
		{
			cout<<"Enter element	:	";
			cin>>ptr[ i ][ j ];
		}
	}
	for( int i = 0; i < 3; ++ i )
	{
		for( int j = 0; j < 4; ++ j )
		{
			cout<<ptr[ i ][ j ]<<"	";
		}
		cout<<endl;
	}

	for( int index = 0; index < 3; ++ index )
		delete[] ptr[ index ];
	delete[] ptr;
	ptr = NULL;
	return 0;
}
int main3( void )
{
	int **ptr = new int*[ 3 ];
	for( int index = 0; index < 3; ++ index )
		ptr[ index ] = new int[ 4 ];

	for( int index = 0; index < 3; ++ index )
		delete[] ptr[ index ];
	delete[] ptr;
	ptr = NULL;
	return 0;
}
int main2( void )
{
	int* ptr[ 3 ];
	ptr[ 0 ] = new int[ 4 ];
	ptr[ 1 ] = new int[ 4 ];
	ptr[ 2 ] = new int[ 4 ];
	return 0;
}
int main1( void )
{
	int *ptr1 = new int[ 4 ];
	int *ptr2 = new int[ 4 ];
	int *ptr3 = new int[ 4 ];
	return 0;
}
