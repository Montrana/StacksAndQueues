// InfixToPostfix.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Montana Nicholson
// Date: July 8th, 2023

#include <iostream>
#include "equationConverter.h"

int main()
{
    cout << "Enter equation to be converted or press Enter when done\n";
    string equation;
    while (getline(cin, equation))
    {
        if (equation == "")
        {
            break;
        }
        try
        {
            string result = convertToPostfix(equation);
            cout << "== " << result << endl;
        }
        catch(runtime_error err)
        {
            cout << "Error: " << err.what() << endl;
        }
        cout << "Enter next equation: ";
    }
}
