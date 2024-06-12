#include "LinkedList.h"
#include <string>
#include <iostream> 
using namespace std;


int main()
{
	LinkedList<string> list;

	list.PushFront("one");
	
	list.PushFront("two");
	
	list.PushFront("three");
	
	list.PushFront("four");

	//list.PushBack("five");

	list.PrintList();

	return 0;
}

