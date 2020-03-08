#include<iostream>
using namespace std;
class InstanceCounter
{
private:
	static int count;
public:
	InstanceCounter( void )
	{
		++ InstanceCounter::count;
	}
	static int getCount( void )
	{
		return InstanceCounter::count;
	}
};
int InstanceCounter::count = 0;
int main( void )
{
	InstanceCounter c1, c2, c3;
	cout<<"Instance Count	:	"<<InstanceCounter::getCount()<<endl;
	return 0;
}
