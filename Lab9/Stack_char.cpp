#include <iostream>
#include <string>
#include "Stack_char.h"
using namespace std;

Stack_char::Stack_char():LinkedList_char()
{}
Stack_char::~Stack_char()
{}
void Stack_char::push(char value)
{
	LinkedList_char::insertAtBack(value);
}
char Stack_char::pop()
{
	char value_to_remove = LinkedList_char::first->val;
	LinkedList_char::removeFromBack();
	return value_to_remove;
}
char& Stack_char::top()
{
	return LinkedList_char::first->val;
}
