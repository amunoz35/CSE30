#include <iostream>
#include <fstream>
using namespace std;

int checkArraySort(string* arr, int size)
{
	int check;
	if (arr[0] <= arr[1])
	{
		check = 1;
	}
	if (arr[0] >= arr[1])
	{
		check = -1;
	}
	for (int i = 0; i < size-1; i++)
	{
		if ((arr[i] <= arr[i+1]) && (check == 1))
		{
			continue;
		}
		if ((arr[i] >= arr[i+1]) && (check == -1))
		{
			continue;
		}
		else
		{
			check = 0;
			break;
		}
	}
	return check;
}

int binarySearchL(string* arr, int size, string value)
{
	int first = 0;
	int last = size;
	while (true)
	{
		if (first > last)
		{
			return -1;
		}
		int middle = (first + last) / 2;
		if (arr[middle] == value)
		{
			return middle;
		}
		else if (arr[middle] < value)
		{
			first = middle + 1;
			continue;
		}
		else if (arr[middle] > value)
		{
			last = middle-1;
			continue;
		}
	}
}

int main()
{
	ifstream file_in;
	file_in.open("words_in.txt");
	string line;
	int count = 0;
	while (getline(file_in,line))
	{
		++count;
	}
	file_in.close();
	string *word_list;
	word_list = new string[count];
	file_in.open("words_in.txt");
	for (int i = 0; i < count; i++)
	{
		getline(file_in,line);
		word_list[i] = line;
	}
	int check = checkArraySort(word_list, count);
	if (check != 1)
	{
		cout << "The array is not sorted increasing" << endl;
	}
	else if (check == 1)
	{
		cout << "The array is sorted increasing, enter a search key: ";
		string k;
		cin >> k;
		int index = binarySearchL(word_list, count, k);
		if (index == -1)
		{
			cout << "The key " << k << " was not found in the array!" << endl;
		}
		else
		{
			cout << "Found key " << k << " at index " << index << "!" << endl;
		}
	}
	return 0;
}
