
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
		this->real = 10;
		this->imag = 20;
	}
	friend ostream& operator<<( ostream &cout, Complex &other )
	{
		cout<<"Real Number	:	"<<other.real<<endl;
		cout<<"Imag Number	:	"<<other.imag<<endl;
		return cout;
	}
};

int main( void )
{
	Complex c1;
	cout<<c1<<endl;

	Complex *ptr = &c1;
	//int *ptrInt = ( int* )ptr;	//C-Style
	int *ptrInt = reinterpret_cast<int*>( ptr );	//C++-Style
	*ptrInt = 50;
	ptrInt = ptrInt + 1;
	*ptrInt = 60;

	cout<<c1<<endl;
	return 0;
}
