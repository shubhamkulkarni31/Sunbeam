#include<iostream>
using namespace std;
class Point
{
public:
	int xPos;
	int yPos;
public:
	void printRecord( void )
	{
		printf("X Position	:	%d\n", this->xPos);
		printf("Y Position	:	%d\n", this->yPos);
	}
};
int main( void )
{
	Point pt1 = { 10, 20 };
	pt1.printRecord();
	return 0;
}
