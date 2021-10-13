#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	string str;//Hypothetical string added by user
	string rts;//The reverse of the input string
	cout<< "Enter the string to reverse "<<endl;
	getline (cin,str);
	for(int i =str.length(); i >=0; i--)
	{
		rts+=str[i];
	}
	cout<<"The reverse of the string is: "<<rts<<endl;
	return 0;
}
