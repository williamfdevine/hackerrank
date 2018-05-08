/**
	@file hello_world.cpp
*/

#include <string>
#include <iostream>

int main()
{
	std::string input;
	std::getline(std::cin, input);

	std::cout << "Hello, World." << std::endl;
	std::cout << input << std::endl;

	return 0;
}