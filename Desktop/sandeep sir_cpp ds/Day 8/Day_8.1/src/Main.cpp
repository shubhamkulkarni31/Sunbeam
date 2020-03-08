#include<iostream>
using namespace std;

void sum( int num1, int num2, int num3 = 0, int num4 = 0 );
int main( void )
{
	sum(10,20);
	sum(10,20,30);
	sum(10,20,30,40);
	return 0;
}
void sum( int num1, int num2, int num3, int num4 )
{
	int result = num1 + num2 + num3 + num4;
	cout<<"Result	:	"<<result<<endl;
}
