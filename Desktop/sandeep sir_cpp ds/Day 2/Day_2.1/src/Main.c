#include<stdio.h>
int main( void )
{
	const int number = 10;
	const int *ptr1 = &number;
	//*ptr1 = 50;	//Not OK
	printf("Number	:	%d\n", *ptr1);//OK

	int *ptr2 = &number;
	*ptr2 = 50;
	printf("Number	:	%d\n", *ptr2);//OK

	return 0;
}
int main11( void )
{
	int number = 10;

	int *ptr1 = &number;
	*ptr1 = 50;
	printf("Number	:	%d\n", *ptr1);//OK

	const int *ptr2 = &number;
	//*ptr2 = 60;	//Not OK
	printf("Number	:	%d\n", *ptr2);//OK

	return 0;
}
int main10( void )
{
	const int num1 = 10;

	const int *const ptr = &num1;	//OK
	//*ptr = 50;	//Not OK
	printf("Num1	:	%d\n", *ptr);//Dereferencing : OK

	const int num2 = 20;
	//ptr = &num2;	//Not OK
	return 0;
}
int main9( void )
{
	int num1 = 10;
	int *const ptr = &num1;	//OK
	*ptr = 50;	//Dereferencing : OK
	printf("Num1	:	%d\n", *ptr);//Dereferencing : OK

	int num2 = 20;
	//ptr = &num2;	//Not OK
	return 0;
}
int main8( void )
{
	const int *ptr = NULL;

	const int num1 = 10;
	ptr = &num1;	//OK
	//*ptr = 50;	//Not OK
	printf("Num1	:	%d\n", *ptr);//Dereferencing : OK

	const int num2 = 20;
	ptr = &num2;	//OK
	//*ptr = 60;	//Not OK
	printf("Num2	:	%d\n", *ptr);//Dereferencing : OK
	return 0;
}
int main7( void )
{
	int *ptr = NULL;
	int num1 = 10;
	ptr = &num1;
	*ptr = 50;	//Dereferencing
	printf("Num1	:	%d\n", *ptr);//Dereferencing

	int num2 = 20;
	ptr = &num2;
	*ptr = 60;	//Dereferencing
	printf("Num2	:	%d\n", *ptr);//Dereferencing
	return 0;
}
int main6( void )
{
	int num1;
	int *ptrNum1 = &num1;
//	num1 = 10;
//	printf("Num1	:	%d\n", num1);

	*ptrNum1 = 10;	//Dereferencing
	printf("Num1	:	%d\n", *ptrNum1);//Dereferencing
	return 0;
}
int main5( void )
{
	int *ptrNum1 = NULL; //Initialization
	int num1 = 10;	//Initialization
	ptrNum1 = &num1;	//Assignment
	return 0;
}
int main4( void )
{
	int num1 = 10;	//Initialization
	int *ptrNum1 = &num1;	//Initialization
	return 0;
}
int main3( void )
{
	char *ch1, ch2;
	printf("%lu	%lu\n",sizeof(ch1), sizeof(ch2));
	return 0;
}
int main2( void )
{
	printf("Size	:	%lu\n",sizeof(void*));
	printf("Size	:	%lu\n",sizeof(char*));
	printf("Size	:	%lu\n",sizeof(int*));
	printf("Size	:	%lu\n",sizeof(float*));
	printf("Size	:	%lu\n",sizeof(double*));
	return 0;
}
int main1( void )
{
	int num1 = 10;
	printf("Num1	:	%d\n",num1);
	printf("Num1	:	%u\n",&num1);
	printf("Num1	:	%p\n",&num1);
	return 0;
}
