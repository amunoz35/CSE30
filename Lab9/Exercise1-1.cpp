#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack s1;
	if(s1.isEmpty())
	{
		cout <<"s1 is empty" << endl;
	}
	else
	{
		cout <<"s1 is NOT empty" << endl;
	}
	s1.push(1);
	s1.print(); cout << endl;
	s1.push(2);
	s1.print(); cout << endl;
	s1.push(3);
	s1.print(); cout << endl;
	s1.push(4);
	s1.print(); cout << endl;
	s1.push(5);
	s1.print(); cout << endl;
	s1.push(10);
	s1.print(); cout << endl;
	s1.push(9);
	s1.print(); cout << endl;
	s1.push(8);
	s1.print(); cout << endl;
	s1.push(7);
	s1.print(); cout << endl;
	s1.push(6);
	s1.print(); cout << endl;
	if (s1.isEmpty())
		cout << "s1 is empty" << endl;
	else
		cout << "s1 is NOT empty" << endl;
	cout << "size of s1 is " << s1.size() << endl;
	cout << "top of s1 is " << s1.top() << endl;
	cout << "popping " << s1.pop() << endl;
	cout << "top is now "<< s1.top() << endl;
	s1.print();
	cout << endl;
	return 0;
}
