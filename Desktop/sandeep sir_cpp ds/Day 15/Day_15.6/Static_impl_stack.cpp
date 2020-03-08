#include<iostream>
#include<string>
using namespace std;

class StackUnderflowException
{
private:
	string message;
public:
	StackUnderflowException( string message ) throw( ) : message( message )
	{	}
	string getMessage( void )const throw( )
	{
		return this->message;
	}
};
class StackOverflowException
{
private:
	string message;
public:
	StackOverflowException( string message ) throw( ) : message( message )
	{	}
	string getMessage( void )const throw( )
	{
		return this->message;
	}
};
class Stack
{
private:
	int top;
	int size;
	int *arr;
public:
	Stack( void )throw( )
	{
		this->top = -1;
		this->size = 0;
		this->arr = NULL;
	}
	Stack( int size )throw( )
	{
		this->top = -1;
		this->size = size;
		this->arr = new int[ this->size ];
	}
	bool empty( void )const throw( )
	{
		return this->top == -1;
	}
	bool full( void )const throw( )
	{
		return this->top == this->size - 1;
	}
	void push( int data )throw( StackOverflowException)
	{
		if( this->full( ) )
			throw StackOverflowException("Stack is full");
		this->arr[ ++ this->top ] = data;
	}
	int peek( void )const throw( StackUnderflowException )
	{
		if( this->empty())
			throw StackUnderflowException("Stack is empty");
		return this->arr[ this->top ];
	}
	void pop( void )throw( StackUnderflowException )
	{
		if( this->empty())
			throw StackUnderflowException("Stack is empty");
		-- this->top;
	}
	~Stack( void )
	{
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};
void accept_record( int &element )
{
	cout<<"Enter element	:	";
	cin>>element;
}
void print_record( int &element )
{
	cout<<"Popped element is : "<<element<<endl;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice, data;
	Stack stk( 5 );
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		try
		{
			switch( choice )
			{
			case 1:
				::accept_record(data);
				stk.push( data );
				break;
			case 2:
				data = stk.peek( );
				::print_record(data);
				stk.pop( );
				break;
			}
		}
		catch( StackOverflowException &ex )
		{
			cout<<ex.getMessage()<<endl;
		}
		catch( StackUnderflowException &ex )
		{
			cout<<ex.getMessage()<<endl;
		}
	}
	return 0;
}
