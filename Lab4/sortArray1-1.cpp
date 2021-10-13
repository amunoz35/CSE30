#include <iostream>
using namespace std;

void sortArr(int a[], int asize, bool ascend)
{
	if (ascend == 1)
	{
		for (int i = asize-1; i > 0; i--)
		{
			int max_i = i;
			for (int j = 0; j < i; j++)
			{
				if (a[j] > a[max_i])
				{
					max_i = j;
				}
			}
			if (max_i != i)
			{
				int max = a[max_i];
				a[max_i] = a[i];
				a[i] = max;
			}
		}
		cout << "This is the sorted array in ascending order: ";
		for (int i = 0; i < asize; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	else
	{
		for (int i = 0; i < asize-1; i++)
		{
			int max_i = i;
			for (int j = i+1; j < asize; j++)
			{
				if (a[j] > a[max_i])
				{
					max_i = j;
				}
			}
			if (max_i != i)
			{
				int max = a[max_i];
				a[max_i] = a[i];
				a[i] = max;
			}
		}
		cout << "This is the sorted array in descending order: ";
		for (int i = 0; i < asize; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	if (size < 0)
	{
		cout << "ERROR: you entered an incorrect value for the array size!" << endl;
	}
	else
	{
		int a[size];
		cout << "Enter the numbers in the array, separated by a space, and press enter: ";
		for (int i = 0; i < size; i++)
		{
			cin >> a[i];
		}
		bool ascend;
		cout << "Sort in ascending (1) or descending (0) order? ";
		cin >> ascend;
		sortArr(a, size, ascend);
	}
}
