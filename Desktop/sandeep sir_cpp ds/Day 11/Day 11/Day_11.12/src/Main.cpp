#include<iostream>
using namespace std;
class Test
{
private:
	int num1;
	int num2;
	static const int num3;
public:
	Test( void )
	{
		this->num1 = 0;
		this->num2 = 0;
	}
	Test( int num1, int num2 )
	{
		this->num1 = num1;
		this->num2 = num2;
	}
	//Test *const this = &t
	void printRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
		cout<<"Num3	:	"<<Test::num3<<endl;
	}
};
const int Test::num3 = 500;
int main( void )
{
	Test t(100,200);
	t.printRecord();
	return 0;
}
