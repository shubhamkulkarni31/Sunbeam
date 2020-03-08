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
	//Point * const this = &pt1
	//Point &other = pt2
	Point operator+( Point &other )
	{
		Point temp;
		temp.xPos = this->xPos + other.xPos;
		temp.yPos = this->yPos + other.yPos;
		return temp;
	}
	void printRecord( void )
	{
		cout<<"X Position	:	"<<this->xPos<<endl;
		cout<<"Y Position	:	"<<this->yPos<<endl;
	}
};
int main( void )
{
	Point pt1( 10, 20 );
	Point pt2( 30, 40 );
	Point pt3;
	pt3 = pt1 + pt2;	//pt3 = pt1.operator+( pt2 )
	pt3.printRecord();
	return 0;
}
