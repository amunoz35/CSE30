#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
	first = NULL;
	last = NULL;
}

LinkedList::~LinkedList(){
	clear();
}



void LinkedList::insertAtBack(int valueToInsert){
	Node* NewNode = new Node();
	NewNode->val = valueToInsert;
	NewNode->next = NULL;
	if (first == NULL)
		first = NewNode;
	if (last == NULL)
		last = NewNode;
	else {
		last->next = NewNode;
		last = NewNode;
	}
}

bool LinkedList::removeFromBack() {
	if (first == NULL)
		return false;
	if (first->next == NULL) {
		delete first;
		first = NULL;
		return true;
	}
	Node* current = first;
	while(current->next && current->next->next != NULL){
		current = current->next;
	}
	delete current->next;
	current->next = NULL;
	return true;
}

void LinkedList::print() {
	if (first == NULL)
		return;
	Node* current = first;
	int value;
	while (current->next != NULL) {
		value = current->val;
		cout << value << ", ";
		current = current->next;
	}
	if (current->next == NULL) {
		value = current->val;
		cout << value;
		return;
	}
}

bool LinkedList::isEmpty() {
  if (first == NULL)
		return true;
	else
		return false;
}

int LinkedList::size() {
	if (first == NULL)
		return 0;
	Node* current = first;
	int count = 0;
	while (current->next != NULL) {
		count++;
		current = current->next;
	}
	if (current->next == NULL) {
		count++;
		return count;
	}
}

void LinkedList::clear() {
  if (first == NULL)
		return;
	Node* current = first;
	while (current->next != NULL) {
		Node* next = current->next;
		delete current;
		current = next;
	}
	first = NULL;
	last = NULL;
}

void LinkedList::insertAtFront(int valueToInsert) {
	Node* NewNode = new Node();
	NewNode->val = valueToInsert;
	NewNode->next = first;
	first = NewNode;
}

bool LinkedList::removeFromFront() {
	if (first == NULL)
		return false;
	if (first->next == NULL) {
		delete first;
		first = NULL;
		return true;
	}
	Node* NewNode = first->next;
	delete first;
	first = NewNode;
}

