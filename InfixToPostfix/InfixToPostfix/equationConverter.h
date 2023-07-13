#pragma once
#include <stack>
#include <string>
#include <sstream>
using namespace std;

const string OPEN = "([{";
const string CLOSE = ")]}";

const string OPERATORS = "+-*/([{)]}";
const int PRECEDENCE[] = {1, 1, 2, 2};

bool isOperator(char ch);
int getPrecedence(char op);
void processOperator(char op);

string convertToPostfix(string equation);