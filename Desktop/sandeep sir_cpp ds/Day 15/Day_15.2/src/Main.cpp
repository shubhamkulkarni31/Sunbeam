#include<iostream>
using namespace std;
class Base
{
private:
	int num1;
	int num2;
public:
	Base( void )
	{
		this->num1 = 0;
		this->num2 = 0;
	}
	void setNum1( int num1 )
	{
		this->num1 = num1;
	}
	void setNum2( int num2 )
	{
		this->num2 = num2;
	}
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
	Derived( void )
	{
		this->num3 = 0;
	}
	void setNum3( int num3 )
	{
		this->num3 = num3;
	}
	void print( void )
	{
		Base::print();
		cout<<"Num3	:	"<<this->num3<<endl;
	}
};
int main( void )
{
	Base *ptrBase = new Derived( );
	ptrBase->setNum1(10);
	ptrBase->setNum2(20);
	Derived *ptrDerived = dynamic_cast<Derived*>( ptrBase);	//Downcasting
	ptrDerived->setNum3(30);
	ptrDerived->print();
	delete ptrDerived;
	return 0;
}
/*int main( void )
{
	Base b1;
	Base &b2 = b1;	//Base *const b2 = &b1;
	b2.setNum1(10);
	b2.setNum2(20);
	Derived &d2 = dynamic_cast< Derived&>( b2 ); //Downcasting
	d2.setNum3(30);
	d2.print();
	return 0;
}*/
/*int main( void )
{
	Base *ptrBase = new Base( );
	ptrBase->setNum1(10);
	ptrBase->setNum2(20);
	Derived *ptrDerived = dynamic_cast< Derived* >( ptrBase ); //Downcasting
	if( ptrDerived != NULL )
	{
		ptrDerived->setNum3(30);
		ptrDerived->print();
		delete ptrDerived;
	}
	else
		cout<<"NULL"<<endl;
	return 0;
}*/
/*int main( void )
{
	Base *ptrBase = new Base( );
	ptrBase->setNum1(10);
	ptrBase->setNum2(20);
	Derived *ptrDerived = static_cast< Derived* >( ptrBase ); //Downcasting
	ptrDerived->setNum3(30);
	ptrDerived->print();
	delete ptrDerived;
	return 0;
}*/

/*int main( void )
{
	Base *ptrBase = new Derived( );
	ptrBase->setNum1(10);
	ptrBase->setNum2(20);
	//Derived *ptrDerived = ( Derived* )ptrBase;	//Downcasting
	Derived *ptrDerived = static_cast<Derived*>( ptrBase);	//Downcasting
	ptrDerived->setNum3(30);
	ptrDerived->print();
	delete ptrDerived;
	return 0;
}*/
