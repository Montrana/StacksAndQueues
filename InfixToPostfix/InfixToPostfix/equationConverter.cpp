#include "equationConverter.h"
using namespace std;

stack<char> operatorStack;
string postfix = "";

bool isOperator(char ch)
{
	return OPERATORS.find(ch) != string::npos;
}

int getPrecedence(char op)
{
	return PRECEDENCE[OPERATORS.find(op)];
}

void processOperator(char op)
{
	if (operatorStack.empty() || (op == '('))
	{
		if (op == ')')
		{
			throw runtime_error("Unmatched close parenthesis");
		}
		operatorStack.push(op);
	}
	else
	{
		if (getPrecedence(op) > getPrecedence(operatorStack.top()))
		{
			operatorStack.push(op);
		}
		else
		{
			while (!operatorStack.empty() 
				&& operatorStack.top() != '('
				&& getPrecedence(op) <= getPrecedence(operatorStack.top()))
			{
				postfix += operatorStack.top();
				postfix += " ";
				operatorStack.pop();
			}
			if (op == ')')
			{
				if(!operatorStack.empty() 
					&& operatorStack.top() == '(')
				{
					operatorStack.pop();
				}
				else
				{
					throw runtime_error("Unmatched close parenthesis");
				}
			}
			else
			{
				operatorStack.push(op);
			}
		}
	}
}

string convertToPostfix(string infix)
{
	istringstream infixItems(infix);
	string nextItem;
	postfix = "";
	while (!operatorStack.empty())
	{
		operatorStack.pop();
	}
	while (infixItems >> nextItem)
	{
		if (isalnum(nextItem[0]))
		{
			postfix += nextItem;
			postfix += " ";
		}
		else if (isOperator(nextItem[0]))
		{
			processOperator(nextItem[0]);
		}
		else
		{
			throw runtime_error("Unexpected Character Encountered " + nextItem[0]);
		}
	}
	while (!operatorStack.empty())
	{
		postfix += operatorStack.top();
		postfix += " ";
		operatorStack.pop();
	}
	return postfix;
}
