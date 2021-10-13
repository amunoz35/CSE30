#include <iostream>
#include <fstream>
using namespace std;

int checkArraySort(string* arr, int size)
{
	int check;
	if(arr[0] >= arr[1])
		check = -1;
	if(arr[0] <= arr[1])
		check = 1;
	for(int i = 0; i < size-1; i ++)
	{
		if((arr[i] >= arr[i+1]) && (check == -1))
			continue;
		if((arr[i] <= arr[i+1])&&(check == 1))
			continue;
		else
		{
			check = 0;
			break;
		}
	}
	return check;
}

int main()
{
	int counter = 0;
	ifstream file_in;
	file_in.open("words_in.txt");
	string line;
	while(getline(file_in, line))
		counter++;
	file_in.close();
	cout<<"count "<<counter << endl;
	string *word_list;
	word_list = new string [counter];
	file_in.open("words_in.txt");
	for(int i = 0; i < counter; i++)
	{
		getline(file_in, line);
		word_list[i] = line;
	}
	int check = checkArraySort(word_list, counter);
	if (check == -1)
		cout << "The array is sorted in descending order!" << endl;
	if(check == 1)
		cout <<"The array is sorted in ascending order!"<< endl;
	if (check == 0)
		cout <<"The array is not sorted!"<< endl;
	return 0;
}
