#include <iostream>
#include "LinkedList_char.h"
using namespace std; LinkedList_char::LinkedList_char() {
	first = NULL;
	last = NULL;
}
LinkedList_char::~LinkedList_char() {
	clear();
}
void LinkedList_char::insertAtBack(char valueToInsert) {
	Node* node = new Node();
	node->val = valueToInsert;
	node->next = NULL;
	if ((first == NULL) && (last == NULL))
	{
		first = node;
		last = node;
	}
	else
	{
		last->next = node;
		last = node;
	}
}
bool LinkedList_char::removeFromBack() {
	if (first == NULL)
	{
		return false;
	}
	if (first == last)
	{
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
	else
	{
		Node* sNode = first;
		while (sNode->next != last)
		{
			sNode = sNode->next;
		}
		delete last;
		last = sNode;
		last->next = NULL;
		return true;
	}
}
void LinkedList_char::print() {
	Node* pNode = first;
	while (pNode != NULL)
	{
		cout << pNode->val;
		if (pNode->next != NULL)
		{
			cout << ",";
			pNode = pNode->next;
			continue;
		}
		else
		{
			break;
		}
	}	
}
bool LinkedList_char::isEmpty() {
	return first == NULL;
}
int LinkedList_char::size() {
	Node* tNode = first;
	int count;
	while (tNode != NULL)
	{
		count++;
		tNode = tNode->next;
	}
	return count;
}
void LinkedList_char::clear() {
	if (first == NULL)
	{
		return;
	}
	if (first == last)
	{
		delete first;
		first = NULL;
		last = NULL;
	}
	else
	{
		Node* sNode = first;
		while (sNode != NULL)
		{
			sNode = first->next;
			delete [] first;
			first = sNode;
		}
		first = NULL;
		last = NULL;
	}
}
void LinkedList_char::insertAtFront(char valueToInsert) {
	Node* node = new Node();
	node->val = valueToInsert;
	node->next = first;
	first = node;
}
bool LinkedList_char::removeFromFront() {
	if (first == NULL)
	{
		return false;
	}
	if (first == last)
	{
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
	else
	{
		delete first;
		first = first->next;
	}
}
