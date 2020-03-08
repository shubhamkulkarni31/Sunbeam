#include<iostream>
using namespace std;
class Point
{
private:
	int xPos;
	int yPos;
public:
	Point( void )
	{
		printf("Point( void )\n");
		this->xPos = 10;
		this->yPos = 20;
	}
	Point( int value)
	{
		printf("Point( int )\n");
		this->xPos = value;
		this->yPos = value;
	}
	Point( int xPos, int yPos)
	{
		printf("Point( int, int )\n");
		this->xPos = xPos;
		this->yPos = yPos;
	}
	void printRecord( void )
	{
		printf("X Position	:	%d\n", this->xPos);
		printf("Y Position	:	%d\n", this->yPos);
	}
};
int main( void )
{
	//Point pt1;		//Point::Point( void )
	//Point pt2( 10 );	//Point::Point( int )
	//Point pt3(50,60);	//Point::Point( int, int )
	//Point pt4();	//Function Declaration
	//Point pt5 = 30;	//Point pt5( 30 ); //Point::Point( int )
	//Point(30,40);	//Point::Point( int, int )
	//Point(30,40).printRecord();
	//Point pt6 = 50, 60;	//Point pt6( 50 ), 60	//Error
	//Point pt6 = ( 50, 60 );	//Point pt6 = ( 60 )	//Point::Point( int )

//	Point pt7;	//Point::Point( void )
//	Point *ptr = &pt7;	//Compiler do not call ctor on ptr

//	Point pt8;	//Point::Point( void )
//	Point &pt9 = pt8;//Compiler do not call ctor on pt9

	Point pt10;	//Point::Point( void )
	Point pt11 = pt10;	//On pt11, copy constructor will call
	return 0;
}
