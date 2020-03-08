#include<iostream>
using namespace std;
void swap_number( int *a, int *b )
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//int &a = x;	//int *const a = &x
//int &b = y;	//int *const b = &y
void swap_number( int &a, int &b )
{
	int temp = a;	//int temp = *a;
	a = b;			//*a = *b;
	b = temp;		// *b = temp
}
int main( void )
{
	int x = 10;

	int y = 20;
	swap_number( &x, &y );

	cout<<"X	:	"<<x<<endl;
	cout<<"Y	:	"<<y<<endl;
	return 0;
}
