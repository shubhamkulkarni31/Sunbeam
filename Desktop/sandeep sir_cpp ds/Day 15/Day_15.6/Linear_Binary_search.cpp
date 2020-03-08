#include<iostream>
using namespace std;

int linear_search( int *arr, int size, int key )
{
	for( int index = 0; index < size; ++ index )
	{
		if( key == arr[ index ] )
			return index;
	}
	return -1;
}
int rec_linear_search( int *arr, int size, int key )
{
	static int index;
	if( index == size )
		return -1;
	else if( key == arr[ index ] )
		return index;
	else
	{
		++ index;
		return rec_linear_search(arr, size, key);
	}
}
int bin_search( int *arr, int size, int key )
{
	int left = 0;
	int right = size - 1;
	while( left <= right )
	{
		int mid = ( left + right ) / 2;
		if( key == arr[ mid ] )
			return mid;
		else if( key > arr[ mid ] )
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}
int rec_bin_search( int *arr, int left, int right, int key )
{
	if( left > right )
		return -1;
	int mid = ( left + right ) / 2;
	if( key == arr[ mid ] )
		return mid;
	else if( key > arr[ mid ] )
		return rec_bin_search(arr, mid + 1, right, key);
	else
		return rec_bin_search(arr, left, mid - 1, key);
}
void print_record( int *arr, int size )
{
	for( int index = 0; index < size; ++ index )
		cout<<arr[ index ]<<"	";
	cout<<endl;
}
int main( void )
{
	int key = 700;
	int arr[ 7 ] = { 10, 20, 30, 40, 50, 60, 70 };
	::print_record( arr, 7 );
	//int index = ::rec_linear_search( arr, 7, key );
	//int index = ::bin_search( arr, 7, key );
	int index = ::rec_bin_search( arr, 0, 6, key );
	if( index != -1 )
		cout<<"Element found at index : "<<index<<endl;
	else
		cout<<"Key not found"<<endl;
	return 0;
}
