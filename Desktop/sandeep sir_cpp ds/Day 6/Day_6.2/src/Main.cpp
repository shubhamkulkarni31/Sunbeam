#include<iostream>
#include<string>
using namespace std;

int main( void )
{
	string str1("SunBeam");
	string &str2 = str1;
	cout<<str2<<endl;
	return 0;
}
int main3( void )
{
	int arr1[ 3 ] = { 10, 20, 30 };
	int (&arr2)[ 3 ] = arr1;
	for( int index = 0; index < 3; ++ index )
		cout<<arr2[ index ]<<endl;
	return 0;
}
int main2( void )
{
	int num1 = 10;
	int *p1 = &num1;
	int *&p2 = p1;
	cout<<&p1<<endl;
	cout<<&p2<<endl;
}
int main1( void )
{
	double num1 = 10.5;
	double &num2 = num1;
	return 0;
}
