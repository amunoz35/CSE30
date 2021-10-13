#include <iostream>
#include <algorithm>
using namespace std;

string combineStr(string input, int n)
{
	string output;
	for(int i = 0; i < n; i++)
	{
		output += input;
	}
	return (output);
}

int main ()
{
	string input;
	int num;
	while(true)
	{
		cout <<"Enter a string: ";
		cin >> input;
		cout <<"Enter a number of times: ";
		cin >> num;
		if(num == 0)
			break;
		string output = combineStr(input, num);
		cout<<"The resulting string is: " << output << endl;
	}
}
