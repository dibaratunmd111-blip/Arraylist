
#include "StringLinkList.h"
#include <iostream>
using namespace std;

StringLinkList::StringLinkList() {
	head = NULL;
}
StringLinkList::~StringLinkList() {
	while (!empty()) {
		removeFront();
	}
}
void StringLinkList::addFront(const string& userdata) {
	NodeType* e = new NodeType;
	e->data = userdata;
	e->next = head;
	head = e;
}
void StringLinkList::removeFront() {
	NodeType* old = head;
	head = head->next;
	delete old;
}
bool StringLinkList:: empty()const{
	return head == NULL;
}
const string& StringLinkList::front() const {
	return head->data;
}
void StringLinkList::display() {
	NodeType* temp = head;
	while (temp != NULL) {
		cout << temp->data<<endl;
		temp = temp->next;	
	}
}