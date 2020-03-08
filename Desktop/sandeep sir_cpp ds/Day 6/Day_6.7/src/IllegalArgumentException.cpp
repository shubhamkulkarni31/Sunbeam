#include"../include/IllegalArgumentException.h"
using namespace nexception;
IllegalArgumentException::IllegalArgumentException( string message ) throw( ) : message( message )
{	}
string IllegalArgumentException::getMessage( void )const throw( )
{
	return this->message;
}
