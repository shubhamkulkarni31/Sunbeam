#include<iostream>
using namespace std;
class Point
{
private:
	int xPos;
	int yPos;
public:
	Point( void ) : Point( 10, 20 )
	{	}
	Point( int xPos, int yPos)
	{
		this->xPos = xPos;
		this->yPos = yPos;
	}
	//Point *const this
	void printRecord( void )
	{
		printf("X Position	:	%d\n", this->xPos);
		printf("Y Position	:	%d\n", this->yPos);
	}
};
int main( void )
{
	Point pt1;
	pt1.printRecord();

	return 0;
}


