
#include<iostream>
using namespace std;
class Test
{
private:
	int number;
public:
	Test( void ) : number( 0 )
	{	}
	//Test *const this
	void showRecord( void )
	{
		cout<<"Number	:	"<<this->number<<endl;
	}
	//const Test *const this
	void printRecord( void )const
	{

	}
};
int main( void )
{
	const Test t;
	t.printRecord( );
	return 0;
}
