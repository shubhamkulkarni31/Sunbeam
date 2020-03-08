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
		this->xPos = 0;
		this->yPos = 0;
	}
	Point( int xPos, int yPos )
	{
		this->xPos = xPos;
		this->yPos = yPos;
	}
	void printRecord( void )
	{
		cout<<"X Position	:	"<<this->xPos<<endl;
		cout<<"Y Position	:	"<<this->yPos<<endl;
	}
	friend Point operator+( Point &pt1, Point &pt2 );
	friend Point operator-( Point &pt1, Point &pt2 );
};
Point operator+( Point &pt1, Point &pt2 )
{
	Point temp;
	temp.xPos = pt1.xPos + pt2.xPos;
	temp.yPos = pt1.yPos + pt2.yPos;
	return temp;
}
Point operator-( Point &pt1, Point &pt2 )
{
	Point temp;
	temp.xPos = pt1.xPos + pt2.xPos;
	temp.yPos = pt1.yPos + pt2.yPos;
	return temp;
}
int main( void )
{
	Point pt1( 10, 20 );
	Point pt2( 30, 40 );
	Point pt3;
	//pt3 = pt1 + pt2;	//pt3 = operator+( pt1, pt2 );
	pt3 = pt1 - pt2;	//pt3 = operator+( pt1, pt2 );
	pt3.printRecord();
	return 0;
}
