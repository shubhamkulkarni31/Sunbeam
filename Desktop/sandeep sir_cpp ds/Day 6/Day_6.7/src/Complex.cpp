#include"../include/Complex.h"
using namespace ncomplex;

Complex::Complex( void ) throw( ) : real( 0 ), imag( 0 )
{	}
Complex::Complex( const int real, const int imag ) throw( ) : real( real ), imag( imag )
{	}
int Complex::getReal( void )const throw( )
{
	return this->real;
}
void Complex::setReal( const int real )throw( IllegalArgumentException )
{
	if( real >= 0 )
		this->real = real;
	else
		throw IllegalArgumentException("Invalid real number");
}
int Complex::getImag( void )const throw( )
{
	return this->imag;
}
void Complex::setImag( const int imag )throw( IllegalArgumentException )
{
	if( imag >= 0 )
		this->imag = imag;
	else
		throw IllegalArgumentException("Invalid imag number");
}
