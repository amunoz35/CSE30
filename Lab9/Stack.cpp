#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

Stack::Stack():LinkedList()
{
}

Stack::~Stack()
{
}

void Stack::push(int value)
{
	LinkedList::insertAtFront(value);
}

int Stack::pop()
{
	int value_to_remove = LinkedList::first->val;
	LinkedList::removeFromFront();
	return value_to_remove;
}

int& Stack::top()
{
	return LinkedList::first->val;
}
