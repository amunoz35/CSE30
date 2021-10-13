#include <iostream>
#include <string>
#include "Stack_char.h"
using namespace std;

int main()
{
	Stack_char s1;
	cout << "isEmpty(): ";
	if (s1.isEmpty())
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << "push(A) "; s1.push('A'); cout << " Stack contents: "; s1.print(); cout << endl;
	cout << "push(Y) "; s1.push('Y'); cout << " Stack contents: "; s1.print(); cout << endl;
	cout << "Size(): " << s1.size() << " Stack contents: "; s1.print(); cout << endl;
	cout << "Pop(): " << s1.pop() << " Stack contents: "; s1.print(); cout << endl;
	cout << "isEmpty(): ";
	if (s1.isEmpty())
		cout << "true" << endl;
	else
		cout << "false" << endl;
	cout << "push(D) "; s1.push('D'); cout << " Stack contents: "; s1.print(); cout << endl;
	cout << "Top(): " << s1.top() << " Stack contents: "; s1.print(); cout <<endl;
	cout << "push(T) "; s1.push('T'); cout << " Stack contents: "; s1.print(); cout << endl;
	cout << "Pop(): " << s1.pop() << " Stack contents: "; s1.print(); cout << endl;
	return 0;
}
