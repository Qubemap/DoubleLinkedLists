#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

template <class T>
class LinkedList
{
private:

	template <class T>
	struct node
	{
		node<T>* next;
		node<T>* previous;
		T data;
		node<T>()
		{
			next = NULL;
			previous = NULL;
		}
	};

	node<T>* head;
	node<T>* tail;

	ListIterator<T> Iterator;

public:

	//CONSTRUCTORS

	LinkedList()
	{
		head = NULL;
		tail = NULL;
	}

	//FUNCTIONS

	//Prints list data from head to NULL
	void PrintList()
	{
		node<T>* currentNode = head;

		if (head == NULL)
		{
			std::cout << "List empty" << std::endl;
			return;
		}

		while (1)
		{
			std::cout << currentNode->data << " ";
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

	//Add node containing data to head of list
	void PushFront(T data)
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

	//Add node containing data to tail of list
	void PushBack(T data)
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

private:

	template <class T>
	struct node
	{
		node<T>* next;
		node<T>* previous;
		T data;
		node<T>()
		{
			next = NULL;
			previous = NULL;
			//data = NULL;
		}
	};

	node<T>* head;
	node<T>* tail;

};

#endif
