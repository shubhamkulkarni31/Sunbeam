#include<iostream>
#include<string>
using namespace std;

template<class X, class Y>
void swap_number( X &o1, Y &o2 )
{
	X temp = o1;
	o1 = o2;
	o2 = temp;
}
int main( void )
{
	float num1 = 10.5f;
	double num2 = 20.5;
	swap_number<float, double>( num1, num2 );
	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	return 0;
}
