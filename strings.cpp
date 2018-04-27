/**
	@file strings.cpp
*/

#include <string>
#include <iostream>

int main()
{
	std::string str1;
	std::string str2;

	std::cin >> str1 >> str2;

	std::cout << str1.length() << " " << str2.length() << std::endl;
	std::cout << str1 << str2 << std::endl;

	std::string str1_swap(str2.at(0) + str1.substr(1, str1.length()));
	std::string str2_swap(str1.at(0) + str2.substr(1, str2.length()));
	std::cout << str1_swap << " " << str2_swap << std::endl;
	return 0;
}