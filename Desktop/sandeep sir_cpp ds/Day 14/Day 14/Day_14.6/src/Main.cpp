
#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;
int main( void )
{
	float number = 10;
	cout<<"Type Name	:	"<<typeid( number ).name()<<endl;
	return 0;
}
int main2( void )
{
	float number = 10;
	const type_info &type =  typeid( number );
	cout<<"Type Name	:	"<<type.name()<<endl;
	return 0;
}

int main1( void )
{
	float number = 10;
	const type_info &type =  typeid( number );
	string typeName = type.name();
	cout<<"Type Name	:	"<<typeName<<endl;
	return 0;
}
