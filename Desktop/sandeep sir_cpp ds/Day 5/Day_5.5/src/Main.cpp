#include<iostream>
using namespace std;
class Test
{
private:
	int num1;
	int num2;
	int num3;
public:
	Test( void );

	Test( int num1, int num2, int num3 );

	void print( void );
};
Test::Test( void ) : num1( 10 ), num2( 20 ), num3( 30 )
{	}
Test::Test( int num1, int num2, int num3 ) : num1( num1 ), num2( num2 ), num3( num3 )
{	}
void Test::print( void )
{
	cout<<"Num1	:	"<<this->num1<<endl;
	cout<<"Num2	:	"<<this->num2<<endl;
	cout<<"Num3	:	"<<this->num3<<endl;
}
int main( void )
{
	Test t1;
	t1.print();
	return 0;
}
