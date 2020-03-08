#include<iostream>
#include<queue>
using namespace std;
int main( void )
{
	queue<double> que;
	que.push(10.1);
	que.push(20.2);
	que.push(30.3);
	que.push(40.4);
	while( !que.empty())
	{
		double element = que.front();
		cout<<"Removed element is	:	"<<element<<endl;
		que.pop();
	}
	return 0;
}
