#include<iostream>
using namespace std;

inline int max( int a, int b );
int main(void )
{
	int x = 10;
	int y = 20;
	int result = max( x, y );
	cout<<"Max number is : "<<result<<endl;
	return 0;
}
inline int max( int a, int b )int max( int a, int b )
{
	return a > b ? a : b;
}
