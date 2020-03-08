#ifndef COMPLEX_H_
#define COMPLEX_H_

#include"../include/IllegalArgumentException.h"
using namespace nexception;

namespace ncomplex
{
	class Complex
	{
	private:
		int real;
		int imag;
	public:
		Complex( void ) throw( );

		Complex( const int real, const int imag ) throw( );

		int getReal( void )const throw( );

		void setReal( const int real )throw( IllegalArgumentException );

		int getImag( void )const throw( );

		void setImag( const int imag )throw( IllegalArgumentException );
	};
}//end of namespace


#endif /* COMPLEX_H_ */
