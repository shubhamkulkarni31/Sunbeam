#include<iostream>
using namespace std;

class Base
{
private:
	int num1;
	int num2;
public:
	Base( void ) : num1( 10 ), num2( 20 )
	{	}
	virtual void f1( void )
	{
		cout<<"Base::f1( )"<<endl;
	}
	virtual void f2( void )
	{
		cout<<"Base::f2( )"<<endl;
	}
	virtual void f3( void )
	{
		cout<<"Base::f3( )"<<endl;
	}
	void f4( void )
	{
		cout<<"Base::f4( )"<<endl;
	}
	void f5( void )
	{
		cout<<"Base::f5( )"<<endl;
	}
};
class Derived : public Base
{
private:
	int num3;
public:
	Derived( void ) : num3( 30 )
	{	}
	virtual void f1( void )
	{
		cout<<"Derived::f1( )"<<endl;
	}
	void f2( void )
	{
		cout<<"Derived::f2( )"<<endl;
	}
	void f4( void )
	{
		cout<<"Derived::f4( )"<<endl;
	}
	virtual void f5( void )
	{
		cout<<"Derived::f5( )"<<endl;
	}
	virtual void f6( void )
	{
		cout<<"Derived::f6( )"<<endl;
	}
};
int main( void )
{
	Derived d;
	d.f1();
	d.f3( );
	return 0;
}
int main4( void )
{
	Derived *ptr = new Derived( );
	//ptr->f1();	//Late Binding : Derived::f1( )
	//ptr->f2();	//Late Binding : Derived::f2( )
	//ptr->f3( );	//Late Binding : Base::f3( )
	//ptr->f4();	//Early Binding : Derived::f4( )
	//ptr->f5();	//Late Binding : Derived::f5( )
	//ptr->f6( );//Late Binding : Derived::f6( )
	delete ptr;
	return 0;
}
int main3( void )
{
	Base *ptr = new Derived( );	//Upcasting
	//ptr->f1();	//Late Binding : Derived::f1( )
	//ptr->f2();	//Late Binding : Derived::f2( )
	//ptr->f3( );	//Late Binding : Base::f3( )
	//ptr->f4();	//Early Binding : Base::f4( )
	//ptr->f5();	//Early Binding : Base::f5( )
	//ptr->f6( );	//Compiler Error.
	delete ptr;
	return 0;
}
int main2( void )
{
	Base *ptr = new Base( );
	//ptr->f1();	//Late Binding : Base::f1( )
	//ptr->f2( );	//Late Binding : Base::f2( )
	//ptr->f3();	//Late Binding : Base::f3( )
	//ptr->f4();	//Early Binding : Base::f4( )
	//ptr->f5();	//Early Binding : Base::f5( )
	//ptr->f6( );	//Compiler Error.
	delete ptr;
	return 0;
}
int main1( void )
{
	Base base;
	//base.f1();	//Early Binding : Base::f1( )
	//base.f2( );	//Early Binding : Base::f2( )
	//base.f3();	//Early Binding : Base::f3( )
	//base.f4();	//Early Binding : Base::f4( )
	//base.f5();	//Early Binding : Base::f5( )
	//base.f6( );	//Compiler Error.
	return 0;
}
