#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	int counter=0;
	string line;
	ifstream mywords_in;
	mywords_in.open("words_in.txt");
	mywords_in >> line;
	while(getline(mywords_in, line))
	{
		counter++;
	}
	mywords_in.close();
	string * words_list;
	words_list = new string [counter];
	mywords_in.open("words_in.txt");
	for(int i = 0; i < counter; i++)
	{
		getline(mywords_in, line);
		words_list[i] = line;
	}
	ofstream mywords_out;
	mywords_out.open("words_out.txt");
	for(int i = 0; i < counter; i++)
	{
		mywords_out << words_list[i]<<endl;
	}
	return 0;
}
