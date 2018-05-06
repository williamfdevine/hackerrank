/**
	@file stacks_balanced_brackets.cpp
*/

#include <iostream>
#include <string>
#include <stack>

bool isOpen(char curr_char)
{
	return (curr_char == '{' ||
		    curr_char == '[' ||
		    curr_char == '(');
}

bool isOpposite(char current, char last)
{
	return ((current == ']' && last == '[') || 
	        (current == ')' && last == '(') || 
	        (current == '}' && last == '{'));
}

bool isBalanced(std::string expression)
{
	std::stack<char> char_stack;

	for(int i = 0; i < expression.length(); i++)
	{
		if(isOpen(expression[i]))
		{
			char_stack.push(expression[i]);
		}
		else
		{
			if(true == char_stack.empty())
			{
				return false;
			}
			char last = char_stack.top();
			char_stack.pop();
			if(false == isOpposite(expression[i], last))
			{
				return false;
			}
		}
	}
	return char_stack.empty();
}

int main()
{
	int num_expressions = 0;
	std::cin >> num_expressions;

	for(int i = 0; i < num_expressions; i++)
	{
		std::string expression;
		std::cin >> expression;

		if(true == isBalanced(expression))
		{
			std::cout << "YES" << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;
		}
	}

	return 0;
}