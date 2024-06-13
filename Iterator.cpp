#ifndef ITERATOR_H
#define ITERATOR_H

#include "LinkedList.h"

template <class T>
class ListIterator
{
public:

	T current;


private:

	node<T>* currentNode;
};

#endif