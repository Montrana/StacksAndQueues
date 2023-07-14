#include "queue.h"

template<typename Type>
queue<Type>::queue() {
	numItems == 0;
}

template<typename Type>
void queue<Type>::push(const Type item) {
	l.push_back(item);
	numItems++;
}

template<typename Type>
Type queue<Type>::front() {
	return l.front();
}

template<typename Type>
void queue<Type>::pop() {
	l.pop_front();
	numItems--;
}

template<typename Type>
Type queue<Type>::popReturn()
{
	Type item = l.front();
	l.pop_front();
	numItems--;
	return item;
}

template<typename Type>
bool queue<Type>::isEmpty()
{
	if(numItems == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename Type>
int queue<Type>::count()
{
	return numItems;
}

