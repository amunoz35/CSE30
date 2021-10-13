#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	int a = 0;
	cout<<"Enter the number of lines for the punishment: ";
	cin>>a;
	if(cin.fail()||a<=0)
	{
		cout<<"You entered an incorrect value for the number of lines";
		exit(1);
	}
	for(int i = 0; i< a; i++)
	{
		cout<<"I will always use object oriented programming.  ";
	}
	return 0;
}
