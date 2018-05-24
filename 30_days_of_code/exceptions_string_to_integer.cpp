/**
	@file exceptions_string_to_integer.cpp
*/

#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::cin >> input;

	try
	{
		std::cout << std::stoi(input) << std::endl;

	}
	catch(...)
	{
		std::cout << "Bad String" << std::endl;
	}

	return 0;
}