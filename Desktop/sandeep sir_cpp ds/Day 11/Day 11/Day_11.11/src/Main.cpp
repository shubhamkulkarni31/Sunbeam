#include<iostream>
using namespace std;
class Test
{
private:
	int num1;	//Instance Variable
	int num2;	//Instance Variable
	static int num3;	//Class-Level Variable
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
int Test::num3 = 500;	//Global definition
int main( void )
{
	Test t1(10,20);
	Test t2(30,40);
	Test t3(50,60);
	t1.printRecord();
	t2.printRecord();
	t3.printRecord();
	return 0;
}
