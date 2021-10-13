#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main ()
{
	int size = 0;
	int counter = 0;
	cout<<"Enter the size of the array: "<<endl;
	cin>> size;
	if (size < 0)
	{
		cout<<"ERROR: you entered an incorrect value for the array size"<<endl;
		exit(1);
	}
	cout<<"Enter the numbers in the array, separated by a space, and press enter: "<<endl;
	int arr[size];
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = size-1; i>0; i--)
	{
		int min = arr[0];
		int minIndex = 0;
		for (int j = 1; j<=i; j++)
		{
			if(arr[minIndex] > arr[j])
			{
				min = arr[j];
				minIndex = j;
			}
			if(minIndex != i)
			{
				swap(arr[minIndex], arr[i]);
				counter++;
			}
		}
	}
	cout<<"This is the sorted array in descending order: ";
	for (int i = 0; i < size; i ++)
	{
		cout<<arr[i] << " ";
	}
	cout<<"It took " <<counter<< " swaps to sort the array..."<<endl;
	cout<<"The algorithm selected the minimum for the traverse of the array."<<endl;
	return 0;
}
