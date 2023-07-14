#pragma once
#include <list>
using namespace std;

template<typename Type>
class queue
{

private:
	list<Type> l;
	int numItems;
public:
	queue();

	void push(const Type item);

	Type front();

	void pop();

	Type popFront();

	bool isEmpty();

	int count();
};

