#include<iostream>
using namespace std;
#define MULTIPLICATION( X, Y)	X * Y
int main(void )
{
	cout<< MULTIPLICATION( 2 + 3, 2 + 3 )<<endl; //11
	cout<< MULTIPLICATION( (2 + 3), (2 + 3) )<<endl;//25
	return 0;
}
int main1( void )
{
	cout<<__FILE__<<endl;
	cout<<__LINE__<<endl;
	cout<<__DATE__<<endl;
	cout<<__TIME__<<endl;
	cout<<__FUNCTION__<<endl;
	return 0;
}
