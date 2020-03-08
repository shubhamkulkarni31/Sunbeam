  #include<iostream>
using namespace std;

namespace na
{
	int num1 = 10;
}
using namespace na;
void show_record( void )
{
	//printf("Num1	:	%d\n",na::num1);
	//using namespace na;
	printf("Num1	:	%d\n",num1);
}
void display_record( void )
{
	//printf("Num1	:	%d\n",na::num1);
	//using namespace na;
	 printf("Num1	:	%d\n",num1);
}
int main( void )
{
	::show_record( );
	::display_record();
	return 0;
}
