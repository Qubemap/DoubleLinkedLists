#include "LinkedList.h"

template <typename T>
void LinkedList<T>::PushFront(T* data)
{
	Node* newNode = new Node(data);

	if (head == NULL)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		newNode->next = head;
		head->previous = newNode;
		head = newNode;
	}
	
}

template <typename T>
void LinkedList<T>::PushBack(T* data)
{
	Node* newNode = new Node(data);

	if (head == NULL)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		newNode->next = head;
		head->previous = newNode;
		head = newNode;
	}

}

template <typename T>
void LinkedList<T>::Insert(int iterator, T* Data)
{

}

template <typename T>
int LinkedList<T>::Begin()
{

}

template <typename T>
int LinkedList<T>::End()
{

}