#include<iostream>
using namespace std;

int main( void )
{
	int getNum1( void );
	cout<<"Num1	:	"<<getNum1()<<endl;

	int getNum2( void );
	cout<<"Num2	:	"<<getNum2()<<endl;
	return 0;
}
int main1( void )
{
	extern int num1;
	cout<<"Num1	:	"<<num1<<endl;

	//extern int num2;
	//cout<<"Num2	:	"<<num2<<endl;
	return 0;
}
