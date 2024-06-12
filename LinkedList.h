#pragma once

#include <iostream>

using namespace std;

template<class T>
struct node
{
	node<T>* next;
	node<T>* previous;
	T data;
	node<T>()
	{
		next = NULL;
		previous = NULL;
		data = NULL;
	}
};

template<class T>
class LinkedList
{
public:
	node<T>* head;
	node<T>* tail;

	//CONSTRUCTORS

	//constructor
	LinkedList<T>() 
	{
		head = NULL;
		tail = NULL;
	}

	void PrintList()
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
	//Add node conatining data to the front of the list
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
};
