#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	int size = 0;//size of the array made by user
	int counter = 0;//counter for the possibility of an increasing array or not
	cout<< "Enter the size of the array: "<<endl;
	cin>>size;

	if (cin.fail()||size<=0)//check if input is valid
	{
		cout<<"ERROR: you entered an incorrect value for the array size!"<<endl;
		exit(1);
	}
	cout<<"Enter the numbers in the array, separated by a space, and press enter: "<<endl;
	int arr[size];
	for(int i = 0; i < size; i++)
	{
		cin>>arr[i];//Takes in every input
	}
	for(int i = 0; i <size; i++)
	{
		if(arr[i] > arr[i-1])
			counter++;
	}
	if(counter == size)
		cout<<"This IS an increasing array!"<<endl;
	else
		cout<<"This is NOT an increasing array!"<<endl;
	for(int i = 0; i< size; i++)
	cout<<arr[i] << " ";
}
