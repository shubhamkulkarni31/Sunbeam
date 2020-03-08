#include<iostream>
using namespace std;

class
{
public:
	void showRecord( void )
	{
		cout<<"void showRecord( void )"<<endl;
	}
	static void displayRecord( void )
	{
		cout<<"static void displayRecord( void )"<<endl;
	}
}t1;

int main( void )
{
	t1.showRecord();
	t1.displayRecord( );
	return 0;
}
