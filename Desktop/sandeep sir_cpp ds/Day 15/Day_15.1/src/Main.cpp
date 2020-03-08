#include<iostream>
using namespace std;
class Test
{
private:
	int number;
public:
	Test( void ) : number( 10 )
	{	}
	//Test *const this
	void showRecord( void )
	{
		cout<<"Number	:	"<<this->number<<endl;
	}
	//const Test *const this
	void printRecord( void )const
	{
		//Test *const ptr = ( Test *const  )this;	//C-Style
		Test *const ptr = const_cast<Test*const>( this );	//C++ - Style
		ptr->showRecord();
	}
};
int main( void )
{
	const Test t;
	t.printRecord( );
	return 0;
}
