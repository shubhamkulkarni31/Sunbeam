#include<iostream>
#include<string>
using namespace std;

template<class T>
void swap_number( T &o1, T &o2 )
{
	T temp = o1;
	o1 = o2;
	o2 = temp;
}
int main( void )
{
	double num1 = 10.5;
	double num2 = 20.5;
	swap_number<double>( num1, num2 );
	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	return 0;
}
