#include "LinkedList.h"

using namespace std;

template <class T>
LinkedList<T>::LinkedList()
{
	head = NULL;
	tail = NULL;
}

//Prints list data head to tail
template <class T>
void LinkedList<T>::PrintList()
{
	node<T>* currentNode = head;

	if (head == NULL)
	{
		cout << "List empty" << endl;
		return;
	}

	while (1)
	{
		cout << currentNode->data << " ";
		if (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}
		else
		{
			return;
		}
	}
}

//FUNCTIONS

//Add node containing argument to the front of the list
template<class T>
void LinkedList<T>::PushFront(T data)
{
	node<T>* newNode = new node<T>;
	newNode->data = data;

	if (head == NULL)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		head->previous = newNode;
		newNode->next = head;
		head = newNode;
	}
}


template <class T>
void LinkedList<T>::PushBack(T data)
{
	node<T>* newNode = new node<T>;
	newNode->data = data;

	if (head == NULL)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode;
		newNode->previous = tail;
		tail = newNode;
	}
}
