
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
	void printRecord( void )
	{
		cout<<"Area	:	"<<this->area<<endl;
	}
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
int main1( void )
{
	Circle c;
	c.acceptRecord();
	c.calculateArea();
	c.printRecord();
	return 0;
}
int main( void )
{
	Rectangle rect;
	rect.acceptRecord();
	rect.calculateArea();
	rect.printRecord();
	return 0;
}
