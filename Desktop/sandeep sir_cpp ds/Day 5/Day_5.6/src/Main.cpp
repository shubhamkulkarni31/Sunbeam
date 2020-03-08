#include<iostream>
using namespace std;
class Test
{
private:
	const int num1;
public:
	Test( void ) : num1( 10 )
	{
		//this->num1 = 10;
	}
	void showRecord( void )
	{
		//++ this->num1;
		cout<<"Num1	:	"<<this->num1<<endl;
	}
	void displayRecord( void )
	{
		//++ this->num1;
		cout<<"Num1	:	"<<this->num1<<endl;
	}
};
int main( void )
{
	Test t1;
	t1.showRecord( );
	t1.displayRecord();
	return 0;
}
