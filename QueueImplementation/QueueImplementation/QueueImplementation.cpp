// QueueImplementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Montana Nicholson
// Date: July 8th, 2023

#include <iostream>
#include "queue.cpp"
using namespace std;

int main()
{
    queue<int> ints;

    ints.push(15);
    ints.push(52);
    cout << ints.count() << endl;
    if (ints.isEmpty())
    {
        cout << "Queue is Empty\n";
    }
    cout << ints.front() << endl;
    ints.push(27);
    cout << ints.popReturn() << endl;
    ints.pop();
    ints.push(31);
    cout << ints.popReturn() << endl;
    cout << ints.popReturn() << endl;
    if (ints.isEmpty())
    {
        cout << "Queue is Empty\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
