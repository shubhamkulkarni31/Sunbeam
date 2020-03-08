#include<iostream>
using namespace std;
class Test
{
private:
	char &ch1;
public:
	Test( char &ch2 ) : ch1( ch2 )
	{	}
};
int main( void )
{
	char ch3 = 'A';
	Test t1( ch3 );
	cout<<sizeof( t1 )<<endl;
	return 0;
}
