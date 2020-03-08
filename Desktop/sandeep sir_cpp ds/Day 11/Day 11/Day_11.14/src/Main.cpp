#include<iostream>
using namespace std;

class A
{
public:
	static void f1( void )
	{
		cout<<"A::f1"<<endl;
	}
};
class B
{
public:
	static void f2( void )
	{
		cout<<"B::f2"<<endl;
	}
	static void f3( void )
	{
		//f1( );	//Not OK
		A::f1();	//OK

		f2( );	//OK
		B::f2( );	//OK
	}
};
int main( void )
{
	//f3( );	//Not OK
	B::f3( );
	return 0;
}
