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
	/// <summary>
	/// Constructor of the queue
	/// </summary>
	queue();

	/// <summary>
	/// Pushes an item to the back of the queue
	/// </summary>
	/// <param name="item">the item to push</param>
	void push(const Type item);

	/// <summary>
	/// gets the item at the front of the queue
	/// </summary>
	/// <returns>the item at the front</returns>
	Type front();

	/// <summary>
	/// Removes the element at the front of the queue
	/// </summary>
	void pop();

	/// <summary>
	/// Removes the element at the front of the queue and returns it
	/// </summary>
	/// <returns>the element that was at the front</returns>
	Type popReturn();

	/// <summary>
	/// checks if the queue is empty or not
	/// </summary>
	/// <returns>true or false whether or not the queue is empty</returns>
	bool isEmpty();

	/// <summary>
	/// gets the number of items in the queue
	/// </summary>
	/// <returns>the number of items in the queue</returns>
	int count();
};

