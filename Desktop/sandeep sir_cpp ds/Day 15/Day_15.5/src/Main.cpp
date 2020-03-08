#include<iostream>
#include<string>
using namespace std;
class Exception
{
private:
	string message;
public:
	Exception( string message = "" ) : message( message )
	{	}
	string getMessage( void )const
	{
		return this->message;
	}
};
class LinkedList;
class Node
{
private:
	int data;
	Node *next;
public:
	Node( int data = 0 ) : data( data ), next( NULL )
	{	}
	friend class LinkedList;
};
class LinkedList
{
private:
	Node *head;
	Node *tail;
public:
	LinkedList( void ) : head( NULL ), tail( NULL )
	{	}
	bool empty( void )const
	{
		return this->head == NULL;
	}
	/*void addFirst( int data )
	{
		Node *newNode = new Node( data );
		if( this->empty( ) )
		{
			this->tail = newNode;
			this->head = newNode;
		}
		else
		{
			newNode->next = this->head;
			this->head = newNode;
		}
	}*/
	void addFirst( int data )
	{
		Node *newNode = new Node( data );
		if( this->empty( ) )
			this->tail = newNode;
		else
			newNode->next = this->head;
		this->head = newNode;
	}
};
void accept_record( string message, int &data )
{
A	cout<<message;
	cin>>data;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Add First"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice, data;
	LinkedList list;
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		switch( choice )
		{
		case 1:
			::accept_record("Enter data	:	", data );
			list.addFirst( data );
			break;
		}
	}
	return 0;
}
