#include<iostream>
using namespace std;

int main( void )
{
	int num1 = 10;
	int &num2 = num1;
	//int *const num2 = &num1;
	cout<<"Num2	:	"<<num2<<endl;
	//cout<<"Num2	:	"<<*num2<<endl;
	return 0;
}
int main3( void )
{
	int num1 = 10;
	int num2 = 20;
	int &num3 = num1;

	num3 = num2;
	++ num2;

	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	cout<<"Num3	:	"<<num3<<endl;
	return 0;
}
int main2( void )
{
	int num1 = 10;
	int &num2 = num1;
	const int &num3 = num1;

	++ num1;
	++ num2;
	//++ num3;

	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	cout<<"Num3	:	"<<num3<<endl;
	return 0;
}

int main1( void )
{
	int num1 = 10;
	int &num2 = num1;

	++ num1;
	++ num2;
	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	return 0;
}
