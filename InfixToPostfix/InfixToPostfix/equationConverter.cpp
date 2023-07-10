#include "equationConverter.h"
using namespace std;

string getInput()
{
	return string();
}

bool isOpen(char ch)
{
	return OPEN.find(ch) != string::npos;
}

bool isClose(char ch)
{
	return CLOSE.find(ch) != string::npos;
}



bool isBalanced(string equation)
{
	stack<char> brackets;
	for(string::const_iterator iter = equation.begin(); iter != equation.end();
		iter++)
	{
		char next = *iter;
		if (isOpen(next))
		{
			brackets.push(next);
		}
		else if (isClose(next))
		{
			if (brackets.empty())
			{
				return false;
			}
			else
			{
				char top = brackets.top();
				brackets.pop();
				if (OPEN.find(top) != CLOSE.find(next))
				{
					return false;
				}
			}
		}
	}
	return true;
}

string convertToPostfix(string equation, bool& result)
{
	return string();
}
