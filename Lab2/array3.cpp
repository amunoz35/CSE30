#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	int size = 0;//initial size of the array
	int counter = 0;//to keep count of the negative numbers
	cout<<"Enter the size of a 2D array: "<<endl;
	cin>>size;
	if(size < 1 ||size > 10)
	{
		cout<<"ERROR: your array is too large! Enter 1 to 10."<<endl;
		exit(1);
	}
	int arr[size][size];
	for(int i =0; i < size; ++i)
	{
		cout<<"Enter the values in the array for row " <<i+1<<", separated by a space, and press enter: "<<endl;
		for(int j=0;j<size;++j)
		{
			cin>>arr[i][j];
		}
	}
	for(int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; j++)
		{
		if(arr[i][j]<0)
			counter++;
		}
	}
	if (counter > 0)
		cout<<"There are " <<counter<<" negative values!"<<endl;
	else
		cout<<"All values are non-negative!"<<endl;
	return 0;
}
