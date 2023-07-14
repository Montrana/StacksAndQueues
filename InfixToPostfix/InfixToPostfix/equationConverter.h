#pragma once
#include <stack>
#include <string>
#include <sstream>
using namespace std;

const string OPEN = "([{";
const string CLOSE = ")]}";

const string OPERATORS = "+-*/([{)]}";
const int PRECEDENCE[] = {1, 1, 2, 2};

/// <summary>
/// Checks if a character is one of the operators
/// </summary>
/// <param name="ch">the character to check</param>
/// <returns>whether or not it is an operator</returns>
bool isOperator(char ch);

/// <summary>
/// Gets the precedence for the operator on a basis of Order of Operations
/// </summary>
/// <param name="op">the operator to check</param>
/// <returns></returns>
int getPrecedence(char op);

/// <summary>
/// Processes the operator by putting it into the stack or 
/// pulling things out of the stack that have higher precedence
/// </summary>
/// <param name="op">the operator to process</param>
void processOperator(char op);

/// <summary>
///  Converts the input equation to postfix
/// </summary>
/// <param name="equation">The equation to convert</param>
/// <returns>The postfix string for the equation</returns>
string convertToPostfix(string equation);