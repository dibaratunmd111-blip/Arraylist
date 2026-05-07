#include "Stringlist.h"
#include <iostream>
using namespace std;

StringList::StringList() {
	head = NULL;
}
StringList::~StringList() {
	while (!empty()) {
		removeFront();
	}
}
void StringList::addFront(const string& userdata) {
	Nodetype* e = new Nodetype;
	e->data = userdata;
	e->next = head;
	head = e;
}
void StringList::removeFront() {
	Nodetype* old = head;
	head = head->next;
	delete old;
}
bool StringList::empty()const {
	return head == NULL;
}
const string& StringList::front() const {
	return head->data;
}
void StringList:: display() const {
	Nodetype* temp = head;
	while (temp != NULL) {
		cout << temp->data << endl;
		temp = temp->next;
	}
}