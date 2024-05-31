#ifndef LINKEDLIST
#define LINKEDLIST

#include <iostream>

using namespace std;

template <typename T> 
class LinkedList {

private:

	class Node {

		T* data;
		Node* next;
		Node* previous;

		Node(T data)
		{
			this->data = data;
			this->next = NULL;
			this->previous = NULL;
		}
	};

	//iterators
	Node* head;
	Node* tail;

public:

	//constructor
	LinkedList() { 
		head = NULL;
		tail = NULL;
	}

	//functions
	void PrintList();

	void PushFront(T data);
	void PushBack(T data);
	//void Insert(int iterator, T data);
	//int Begin();
	//int End();
	/*T First();
	T Last();
	int Count();
	void Erase(int iterator);
	void Remove(T data);
	void PopBack();
	void PopFront();
	bool Empty();
	void Clear();*/
};

#endif