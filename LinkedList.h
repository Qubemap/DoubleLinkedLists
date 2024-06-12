#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>

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

template <class T>
class LinkedList
{
public:
	node<T>* head;
	node<T>* tail;

	//Constructors

	LinkedList();

	void PrintList();
	void PushFront(T data);
	void PushBack(T data);
};

#endif
