#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	int typo = 0;
	int a = 0;
	cout<<"Enter the number of lines for the punishment: ";
	cin>>a;
	if(cin.fail()||a<=0)
	{
		cout<<"You entered an incorrect value for the line typo! ";
		exit(1);
	}
	cout<<"Enter the line for which we want to make a typo: ";
	cin>>typo;
	if(cin.fail()||typo<=0||a<typo)
	{
		cout<<"You entered an incorrect value for the number of lines! ";
		exit(1);
	}
	for(int i = 0;i<a; i++)
	{
		if(i+1 == typo)
			cout<<"I will always use object oriented programing.  ";
		cout<<"I will always use object oriented programming.  ";
	}
	return 0;
}
