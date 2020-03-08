#include<iostream>
using namespace std;
class Test
{
private:
	int num1;
protected:
	int num2;
public:
	Test( void )
	{
		this->num1 = 10;
		this->num2 = 20;
	}
	friend void print( void );
};
void print( void )
{
	Test t1;
	cout<<"Num1	:	"<<t1.num1<<endl;
	cout<<"Num1	:	"<<t1.num2<<endl;
}
int main( void )
{
	print();
	return 0;
}
