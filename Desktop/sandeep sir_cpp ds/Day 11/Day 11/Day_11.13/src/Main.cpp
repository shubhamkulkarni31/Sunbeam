#include<iostream>
using namespace std;
class Test
{
private:
	int num1;
	int num2;
	static int num3;
public:
	Test( void )
	{
		this->num1 = 0;
		this->num2 = 0;
	}
	//Test *const this = &t1
	void setNum1( int num1 )
	{
		this->num1 = num1;
	}
	//Test *const this = &t1
	void setNum2( int num2 )
	{
		this->num2 = num2;
	}
	static void setNum3( int num3 )
	{
		Test::num3 = num3;
	}
	//Test *const this = &t
	void printRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
		cout<<"Num3	:	"<<Test::num3<<endl;
	}
};
int Test::num3 = 0;
int main( void )
{
	Test t1;
	t1.setNum1( 10 );	//t1.setNum1( &t1, 10 );
	t1.setNum2( 20 );	//t1.setNum2( &t1, 20 );
	Test::setNum3( 30 );
	t1.printRecord();
	return 0;
}
