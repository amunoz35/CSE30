#include <iostream>
#include "LinkedList.h"
using namespace std; LinkedList::LinkedList() {
	first = NULL;
	last = NULL;
}
LinkedList::~LinkedList() {
	clear();
}
void LinkedList::insertAtBack(int valueToInsert) {
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
bool LinkedList::removeFromBack() {
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
void LinkedList::print() {
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
bool LinkedList::isEmpty() {
	return first == NULL;
}
int LinkedList::size() {
	Node* tNode = first;
	int count;
	while (tNode != NULL)
	{
		count++;
		tNode = tNode->next;
	}
	return count;
}
void LinkedList::clear() {
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
void LinkedList::insertAtFront(int valueToInsert) {
	Node* node = new Node();
	node->val = valueToInsert;
	node->next = first;
	first = node;
}
bool LinkedList::removeFromFront() {
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
