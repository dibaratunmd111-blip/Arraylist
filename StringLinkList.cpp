#include <iostream>
#include <string>
#include "StringLinkList.h"

int main()
{
	StringLinkList list;
	list.addFront("mike");
	list.display();
	cout << "\n";
	list.addFront("sharief");
	list.display();
	cout << "\n";

	list.removeFront();
	list.display();

	
}

