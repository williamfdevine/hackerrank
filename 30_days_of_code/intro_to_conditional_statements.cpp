/**
	@file intro_to_conditional_statements.cpp
*/

#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;

	if(n % 2 != 0)
	{
		std::cout << "Weird";
	}
	else if(n >= 2 && n <= 5)
	{
		std::cout << "Not Weird";
	}
	else if(n >= 6 && n <= 20)
	{
		std::cout << "Weird";
	}
	else
	{
		std::cout << "Not Weird";
	}

	std::cout << std::endl;

	return 0;
}