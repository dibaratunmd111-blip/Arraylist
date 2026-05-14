#pragma once
#include <iostream>
using namespace std;

class NodeType
{
	private:
		string data;
		NodeType* next;
	friend class StringLinkList;
};

