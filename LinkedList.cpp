#include "LinkedList.h"

using namespace std;

//template <typename T>
//LinkedList<T>::LinkedList()
//{
//	head = NULL;
//	tail = NULL;
//}

template <typename T>
void LinkedList<T>::PrintList()
{
	Node* currentNode = head;

	if (head == NULL)
	{
		cout << "List empty" << endl;
		return;
	}

	while (currentNode != NULL)
	{
		cout << currentNode->data << " ";
		currentNode = currentNode->next;
	}
}

template <typename T>
void LinkedList<T>::PushFront(T data)
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
void LinkedList<T>::PushBack(T data)
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

//template <typename T>
//void LinkedList<T>::Insert(int iterator, T Data)
//{
//
//}
//
//template <typename T>
//int LinkedList<T>::Begin()
//{
//
//}
//
//template <typename T>
//int LinkedList<T>::End()
//{
//
//}