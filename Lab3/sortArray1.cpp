
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main ()
{
	int size = 0;
	int max = 0;
	cout<<"Enter the size of the array: "<<endl;
	cin>>size;
	if(size < 0)
	{
		cout<<"ERROR: you entered an incorrect value for the array size"<<endl;
		exit(1);
	}
	cout<<"Enter the numbers in the array, separated by a space, and press enter: "<<endl;
	int arr[size];
	for(int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	for (int i = 0; i <= size-1; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			if(arr[i] < arr[j])
			{
				max = arr[j];
				arr[j] = arr[i];
				arr[i] = max;
			}
		}
	}
	cout<<"This is the sorted array in ascending order: ";
	for (int i =0; i <size; i++)
	{
		cout<<arr[i] << " ";
	}
	cout<<"The algorithm selected the maximum for the traverse of the array."<<endl;
	return 0;
}

