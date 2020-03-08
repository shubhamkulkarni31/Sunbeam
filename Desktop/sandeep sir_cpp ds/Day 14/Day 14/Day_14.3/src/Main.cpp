
#include<iostream>
using namespace std;
class Rectangle
{
private:
	float area;
	float length;
	float breadth;
public:
	Rectangle( void )
	{
		this->area = 0;
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
	void printRecord( void )
	{
		cout<<"Area	:	"<<this->area<<endl;
	}
};
class Circle
{
private:
	float area;
	float radius;
public:
	Circle( void )
	{
		this->area = 0;
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
	void printRecord( void )
	{
		cout<<"Area	:	"<<this->area<<endl;
	}
};
int main( void )
{
	Circle c;
	c.acceptRecord();
	c.calculateArea();
	c.printRecord();
	return 0;
}
int main1( void )
{
	Rectangle rect;
	rect.acceptRecord();
	rect.calculateArea();
	rect.printRecord();
	return 0;
}
