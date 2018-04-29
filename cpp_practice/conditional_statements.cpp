/**
	@file conditional_statements.cpp
*/

#include <iostream>
#include <string>
#include <map>

static const std::map<int, std::string> int_word
{
	{1, "one"},
	{2, "two"},
	{3, "three"},
	{4, "four"},
	{5, "five"},
	{6, "six"},
	{7, "seven"},
	{8, "eight"},
	{9, "nine"}
};


int main()
{
	int n;
	std::cin >> n;

	if(9 >= n)
	{
		std::cout << int_word.at(n);
		return 0;
	}

	std::cout << "Greater than 9";
	return 0;
}