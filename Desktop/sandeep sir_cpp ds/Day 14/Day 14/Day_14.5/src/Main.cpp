
#include<iostream>
using namespace std;
class Shape
{
protected:
	float area;
public:
	Shape( void )
	{
		this->area = 0;
	}
	virtual void acceptRecord( void ) = 0;

	virtual void calculateArea( void ) = 0;

	void printRecord( void )
	{
		cout<<"Area	:	"<<this->area<<endl;
	}
	virtual ~Shape( void ){	}
};
class Rectangle : public Shape
{
private:
	float length;
	float breadth;
public:
	Rectangle( void )
	{
		this->length = 0;
		this->breadth = 0;
	}
	void acceptRecord( void )
	{
		cout<<"Length	:	";
		cin>>this->length;
		cout<<"Breadth	:	";
		cin>>this->breadth;
	}
	void calculateArea( void )
	{
		this->area = this->length * this->breadth;
	}
};
class Circle : public Shape
{
private:
	float radius;
public:
	Circle( void )
	{
		this->radius = 0;
	}
	void acceptRecord( void )
	{
		cout<<"Radius	:	";
		cin>>this->radius;
	}
	void calculateArea( void )
	{
		this->area = 3.14f * this->radius * this->radius;
	}
};
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Rectangle"<<endl;
	cout<<"2.Circle"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice;
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		Shape *ptr = NULL;
		switch( choice )
		{
		case 1:
			ptr = new Rectangle( );	//Upcasting
			break;
		case 2:
			ptr = new Circle( );	//Upcasting
			break;
		}
		if( ptr != NULL )
		{
			ptr->acceptRecord( );
			ptr->calculateArea( );
			ptr->printRecord();
			delete ptr;
		}
	}
	return 0;
}
