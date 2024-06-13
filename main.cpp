#include "LinkedList.h"

#include <string>

int main()
{
	LinkedList<std::string> list;
	
	list.PushFront("Three");
	
	list.PushFront("Two");
	
	list.PushFront("One");

	list.PushBack("Four");

	list.PrintList();

	return 0;
}

