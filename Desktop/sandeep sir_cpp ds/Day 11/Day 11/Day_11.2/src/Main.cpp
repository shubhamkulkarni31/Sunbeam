#include<iostream>
#include<string>
using namespace std;

//template<typename T>	//T : Type Parameter
template<class T>	//T : Type Parameter
void swap_number( T &o1, T &o2 )
{
	T temp = o1;
	o1 = o2;
	o2 = temp;
}
int main( void )
{
	int num1 = 10;
	int num2 = 20;
	//swap_number<int>( num1, num2 );
	//Here int is type argument
	swap_number( num1, num2 );
	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	return 0;
}
