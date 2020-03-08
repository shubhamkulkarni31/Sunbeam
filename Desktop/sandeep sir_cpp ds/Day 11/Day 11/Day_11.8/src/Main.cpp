#include<iostream>
#include<stack>
using namespace std;
int main( void )
{
	stack<int> stk;
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);
	stk.push(50);

	while( !stk.empty( ) )
	{
		int element = stk.top();
		cout<<"Popped element is	:	"<<element<<endl;
		stk.pop();
	}
	return 0;
}
