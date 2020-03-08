#include<iostream>
using namespace std;
#include"../include/Math.h"


int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Sum"<<endl;
	cout<<"2.Sub"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice;
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		int result = 0;
		switch( choice )
		{
		case 1:
			result = sum(100,20);
			break;
		case 2:
			result = sub(100,20);
			break;
		}
		cout<<"Result	:	"<<result<<endl;
	}
	return 0;
}
