#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Iterator.h"

#include <iostream>

template <class T>
class LinkedList
{
private:

	struct node
	{
		node* next;
		node* previous;
		T data;
		node()
		{
			next = NULL;
			previous = NULL;
		}
	};

	node* head;
	node* tail;

public:

	struct Iterator
	{
	public:

		Iterator()
		{
			currentNode = NULL;
		}

		Iterator(node* node)
		{
			currentNode = node;
		}


	private:
		node* currentNode;
	};

	node* head;
	node* tail;

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
		node* currentNode = head;

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
		node* newNode = new node;
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
		node* newNode = new node;
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
};

#endif
