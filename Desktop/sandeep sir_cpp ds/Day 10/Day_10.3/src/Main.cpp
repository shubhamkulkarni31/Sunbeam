#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void )
	{
		this->real = 0;
		this->imag = 0;
	}
	Complex( int real, int imag )
	{
		this->real = real;
		this->imag = imag;
	}
	friend istream& operator>>( istream &cin, Complex &other );
	friend ostream& operator<<( ostream &cout, Complex &other );
};
istream& operator>>( istream &cin, Complex &other )
{
	cout<<"Enter real number	:	";
	cin>>other.real;
	cout<<"Enter imag number	:	";
	cin>>other.imag;
	return cin;
}
ostream& operator<<( ostream &cout, Complex &other )
{
	cout<<"Real Number	:	"<<other.real<<endl;
	cout<<"Imag Number	:	"<<other.imag<<endl;
	return cout;
}
int main( void )
{
	Complex c1,c2;
	cin>>c1>>c2; //operator >>(operator >>(cin, c1), c2);
	cout<<c1<<c2;//operator <<(operator <<(cout, c1), c2);
	return 0;
}
int main3( void )
{
	Complex c1;
	cin>>c1;	//operator>>( cin, c1 );
	cout<<c1;	//operator<<( cout, c1 );
}
int main2( void )
{
	Complex c1(10,20);
	Complex c2(30,40);
	cout<<c1<<c2;//operator <<(operator <<(cout, c1), c2);
	return 0;
}
int main1( void )
{
	Complex c1(10,20);
	cout<<c1;	//operator<<( cout, c1 );
	return 0;
}
