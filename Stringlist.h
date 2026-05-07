#include <iostream>
#include <string>
#include "NodeType.h"
using namespace std;

struct StringList {
    Nodetype* head;
    StringList();
    ~StringList();
    bool empty() const;
    const string& front() const;
    void addFront(const string& e);
    void removeFront();
    void display() const;
};