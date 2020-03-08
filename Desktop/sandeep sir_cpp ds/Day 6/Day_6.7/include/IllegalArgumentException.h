#ifndef ILLEGALARGUMENTEXCEPTION_H_
#define ILLEGALARGUMENTEXCEPTION_H_

#include<string>
using namespace std;

namespace nexception
{
	class IllegalArgumentException
	{
	private:
		string message;
	public:
		IllegalArgumentException( string message ) throw( );

		string getMessage( void )const throw( );
	};
}//end of namespace

#endif /* ILLEGALARGUMENTEXCEPTION_H_ */
