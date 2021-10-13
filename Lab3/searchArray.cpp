#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int size = 0;
	int v =0;
	int x =0;
	int i =0;
	 cout<<"Enter the size of the array: "<<endl;
	 cin>>size;
	if(size < 0)
	{
		cout<<"ERROR: you entered an incorrect value for the array size"<<endl;
		exit(1);
	}
	cout<<"Enter the numbers in the array, separated by a space, and press enter: "<<endl;
	int arr[size];
	for(int j = 0; j < size; j++)
	{
		cin>>arr[j];
	}
	cout<<"Enter a number to search for in the array: "<<endl;
	cin>>v;
	for(i = 0; i < size; ++i)
	{
		if(arr[i] == v)
		{
			x=i+1;
			break;
		}
	}
	if(arr[i] == v)
		cout<<"Found value "<<v<<" at index "<<i<<" which took "<<x<<" checks."<<endl;
	else
		cout<<"The value "<<v<<" was not found in the array!"<<endl;
	if(i==0)
		cout<<"We ran into the best case scenario!"<<endl;
	if(i == size-1)
		cout<<"We ran into the worst case scenario!"<<endl;
	return 0;
}
