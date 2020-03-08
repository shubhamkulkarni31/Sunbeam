#include<iostream>
using namespace std;
class Test
{
private:
	const int num1;
	int num2;
	mutable int count;
public:
	Test( void ) : num1( 10 ), num2( 20 ), count( 0 )
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
		++ this->count;
	}
	int getCount( )
	{
		return this->count;
	}

};
int main( void )
{
	Test t1;
	t1.displayRecord();
	t1.displayRecord();
	t1.displayRecord();
	cout<<"Count	:	"<<t1.getCount()<<endl;

	Test t2;
	t2.displayRecord();
	t2.displayRecord();
	cout<<"Count	:	"<<t2.getCount()<<endl;
	return 0;
}
