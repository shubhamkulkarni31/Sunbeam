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
	int data;
	Node *next;
public:
	Node( int data = 0 ) throw( ) : data( data ), next( NULL )
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
		}
		else
		{
			newNode->next = this->head;
			this->head = newNode;
		}
	}*/
	void addFirst( int data )throw( bad_alloc )
	{
		Node *newNode = new Node( data );
		if( this->empty( ) )
			this->tail = newNode;
		else
			newNode->next = this->head;
		this->head = newNode;
	}
	/*void addLast( int data )throw( bad_alloc )
	{
		Node *newNode = new Node( data );
		if( this->empty())
		{
			this->head = newNode;
			this->tail = newNode;
		}
		else
		{
			this->tail->next = newNode;
			this->tail = newNode;
		}
	}*/
	void addLast( int data )throw( bad_alloc )
	{
		Node *newNode = new Node( data );
		if( this->empty())
			this->head = newNode;
		else
			this->tail->next = newNode;
		this->tail = newNode;
	}
	int getCount( void )
	{
		int count = 0;
		Node *trav = this->head;
		while( trav != NULL )
		{
			++ count;
			trav = trav->next;
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
			trav->next = newNode;
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
			Node *trav = this->head;
			while( trav->next != this->tail )
				trav = trav->next;
			delete this->tail;
			this->tail = trav;
			this->tail->next = NULL;
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
			delete ptrNode;
		}
	}
	Node* find( int data )
	{
		Node *trav = this->head;
		while( trav != NULL )
		{
			if( trav->data == data )
				return trav;
			trav = trav->next;
		}
		return NULL;
	}
	void reverseList( void )
	{
		if( !this->empty( ) )
		{
			Node *trav = this->head;
			Node *current;
			Node *previous = NULL;
			while( trav != NULL )
			{
				current = trav;
				trav = trav->next;
				current->next = previous;
				previous = current;
			}
			swap(this->head, this->tail);
		}
	}
	void printList( void )const throw( Exception )
	{
		if( this->empty( ) )
			throw Exception("LinkedList is empty");
		Node *trav = this->head;
		while( trav != NULL )
		{
			cout<<trav->data<<"	";
			trav = trav->next;
		}
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
