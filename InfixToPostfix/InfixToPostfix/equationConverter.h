#pragma once
#include <stack>
#include <string>
using namespace std;

const string OPEN = "([{";
const string CLOSE = ")]}";

string getInput();
bool isOpen(char ch);
bool isClose(char ch);
bool isBalanced(string input);
string convertToPostfix(string equation, bool& result);