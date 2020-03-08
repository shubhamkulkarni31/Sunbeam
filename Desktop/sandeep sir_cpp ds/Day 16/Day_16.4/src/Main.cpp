#include<iostream>
#include<string>
using namespace std;
class Exception
{
private:
	string message;
public:
	Exception( string message = "" ) throw( ) : message( message )
	{	}
	string getMessage( void )const throw( )
	{
		return this->message;
	}
};
class LinkedList;
class Node
{
private:
	Node *prev;
	int data;
	Node *next;
public:
	Node( int data = 0 ) throw( ) : prev( NULL ), data( data ), next( NULL )
	{	}
	friend class LinkedList;
};
class LinkedList
{
private:
	Node *head;
	Node *tail;
public:
	LinkedList( void ) throw( ) : head( NULL ), tail( NULL )
	{	}
	bool empty( void )const throw( )
	{
		return this->head == NULL;
	}
	/*void addFirst( int data )throw( bad_alloc )
	{
		Node *newNode = new Node( data );
		if( this->empty( ) )
		{
			this->tail = newNode;
			this->head = newNode;
			this->head->prev = this->tail;
			this->tail->next = this->head;
		}
		else
		{
			newNode->next = this->head;
			this->head->prev = newNode;
			this->head = newNode;
			this->head->prev = this->tail;
			this->tail->next = this->head;
		}
	}*/
	void addFirst( int data )throw( bad_alloc )
	{
		Node *newNode = new Node( data );
		if( this->empty( ) )
			this->tail = newNode;
		else
		{
			newNode->next = this->head;
			this->head->prev = newNode;
		}
		this->head = newNode;
		this->head->prev = this->tail;
		this->tail->next = this->head;
	}
	/*void addLast( int data )throw( bad_alloc )
	{
		Node *newNode = new Node( data );
		if( this->empty())
		{
			this->head = newNode;
			this->tail = newNode;
			this->head->prev = this->tail;
			this->tail->next = this->head;
		}
		else
		{
			this->tail->next = newNode;
			newNode->prev = this->tail;
			this->tail = newNode;
			this->head->prev = this->tail;
			this->tail->next = this->head;
		}
	}*/
	void addLast( int data )throw( bad_alloc )
	{
		Node *newNode = new Node( data );
		if( this->empty())
			this->head = newNode;
		else
		{
			this->tail->next = newNode;
			newNode->prev = this->tail;
		}
		this->tail = newNode;
		this->head->prev = this->tail;
		this->tail->next = this->head;
	}
	int getCount( void )
	{
		int count = 0;
		if( !this->empty())
		{
			Node *trav = this->head;
			do
			{
				++ count;
				trav = trav->next;
			}while( trav != this->head );
		}
		return count;
	}
	void addAtPosition( int data, int position )throw( Exception, bad_alloc )
	{
		if( position <= 0 && position > ( this->getCount() + 1 ) )
			throw Exception("Invalid position");
		else if( position == 1 )
			this->addFirst( data );
		else if( position > this->getCount() )
			this->addLast(data);
		else
		{
			Node *trav = this->head;
			for( int count = 1; count < position - 1; ++ count )
				trav = trav->next;
			Node *newNode = new Node( data );
			newNode->next = trav->next;
			trav->next->prev = newNode;
			trav->next = newNode;
			newNode->prev = trav;
		}
	}
	void removeFirst( void )throw( Exception )
	{
		if( this->empty())
			throw Exception("LinkedList is empty");
		else if( this->head == this->tail )
		{
			delete this->head;
			this->head = this->tail = NULL;
		}
		else
		{
			Node *ptrNode = this->head;
			this->head = this->head->next;
			delete ptrNode;
			this->head->prev = this->tail;
			this->tail->next = this->head;
		}
	}
	void removeLast( void )throw( Exception )
	{
		if( this->empty())
			throw Exception("LinkedList is empty");
		else if( this->head == this->tail )
		{
			delete this->head;
			this->head = this->tail = NULL;
		}
		else
		{
			this->tail = this->tail->prev;
			delete this->tail->next;
			this->head->prev = this->tail;
			this->tail->next = this->head;
		}
	}
	void removeFromPosition( int position )
	{
		if( position <= 0 && position > this->getCount() )
			throw Exception("Invalid position");
		else if( position == 1 )
			this->removeFirst();
		else if( position == this->getCount())
			this->removeLast();
		else
		{
			Node *trav = this->head;
			for( int count = 1; count < position - 1; ++ count )
				trav = trav->next;
			Node *ptrNode = trav->next;
			trav->next = ptrNode->next;
			ptrNode->next->prev = trav;
			delete ptrNode;
		}
	}
	void reverseList( void )
	{
		if( !this->empty( ) )
		{
			Node *trav = this->head;
			Node *current;
			Node *previous = this->tail;
			do
			{
				current = trav;
				trav = trav->next;
				current->next = previous;
				current->prev = trav;
				previous = current;
			}while( trav != this->head );
			swap(this->head, this->tail);
		}
	}
	void printList( void )const throw( Exception )
	{
		if( this->empty( ) )
			throw Exception("LinkedList is empty");
		Node *trav = this->head;
		do
		{
			cout<<trav->data<<"	";
			trav = trav->next;
		}while( trav != this->head );
		cout<<endl;
	}
	~LinkedList( void )
	{
		this->clear( );
	}
private:
	void clear( void )
	{
		while( !this->empty( ) )
			this->removeFirst();
	}
};
void accept_record( string message, int &data )
{
	cout<<message;
	cin>>data;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Add First"<<endl;
	cout<<"2.Add Last"<<endl;
	cout<<"3.Add At Position"<<endl;
	cout<<"4.Remove First"<<endl;
	cout<<"5.Remove Last"<<endl;
	cout<<"6.Remove From Position"<<endl;
	cout<<"7.Reverse LinkedList"<<endl;
	cout<<"8.Print LinkedList"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice, data, position;
	LinkedList list;
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		switch( choice )
		{
		case 1:
			::accept_record("Enter data	:	", data );
			list.addFirst( data );
			break;
		case 2:
			::accept_record("Enter data	:	", data );
			list.addLast( data );
			break;
		case 3:
			::accept_record("Enter data	:	", data );
			::accept_record("Enter position	:	", position );
			list.addAtPosition( data, position );
			break;
		case 4:
			list.removeFirst( );
			break;
		case 5:
			list.removeLast();
			break;
		case 6:
			::accept_record("Enter position	:	", position );
			list.removeFromPosition( position );
			break;
		case 7:
			list.reverseList( );
			break;
		case 8:
			list.printList( );
			break;
		}
	}
	return 0;
}
