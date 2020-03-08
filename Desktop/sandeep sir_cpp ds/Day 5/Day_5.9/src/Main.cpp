.30#include<iostream>
using namespace std;
class Test
{
private:
	 int num1;
	 int num2;
public:
	Test( void ) : num1( 10 ), num2( 20 )
	{	}
	//Test *const this = &t1
	void showRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
	//const Test *const this = &t1
	void displayRecord( void )const
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
};
int main( void )
{
	const Test t1;

	t1.displayRecord();
	return 0;
}
