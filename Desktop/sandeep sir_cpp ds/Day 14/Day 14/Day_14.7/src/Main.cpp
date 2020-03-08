
#include<iostream>
#include<typeinfo>
using namespace std;
class Base
{
private:
	int num1;
	int num2;
public:
	Base( void ) : num1( 0 ), num2( 0 )	{	}
	virtual void print( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
};
class Derived : public Base
{
private:
	int num3;
public:
	Derived( void ) : num3( 0 )	{	}
	void print( void )
	{
		Base::print( );
		cout<<"Num3	:	"<<this->num3<<endl;
	}
};
int main( void )
{
	Base *ptr = NULL;
	cout<<typeid( ptr ).name()<<endl;	//P4Base
	cout<<typeid( *ptr ).name()<<endl;	//Exception : std::bad_typeid
	return 0;
}
int main5( void )
{
	Base *ptr = new Derived( );
	cout<<typeid( ptr ).name()<<endl;	//P4Base
	cout<<typeid( *ptr ).name()<<endl;	//7Derived
	return 0;
}
int main4( void )
{
	Derived *ptr = new Derived( );
	cout<<typeid( ptr ).name()<<endl;	//P7Derived
	cout<<typeid( *ptr ).name()<<endl;	//7Derived
	return 0;
}
int main3( void )
{
	Derived derived;
	cout<<typeid( derived ).name()<<endl;	//7Derived
	return 0;
}

int main2( void )
{
	Base *ptr = new Base( );
	cout<<typeid( ptr ).name()<<endl;	//P4Base
	cout<<typeid( *ptr ).name()<<endl;	//4Base
	return 0;
}

int main1( void )
{
	Base base;
	cout<<typeid( base ).name()<<endl;	//4Base
	return 0;
}
