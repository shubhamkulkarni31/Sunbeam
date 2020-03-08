#include<iostream>
#include<list>
using namespace std;
int main( void )
{
	list<int> intList;
	intList.push_back(10);
	intList.push_back(20);
	intList.push_back(30);

	list<int>::iterator itrStart = intList.begin();
	list<int>::iterator itrEnd = intList.end();
	while( itrStart != itrEnd )
	{
		cout<< *itrStart<<"	";
		++ itrStart;
	}
	cout<<endl;
	return 0;
}
