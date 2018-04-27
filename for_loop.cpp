/**
	@file for_loop.cpp
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
	unsigned int a = 0;
	unsigned int b = 0;
	std::cin >> a >> b;

	for(int i = a; i <= b; i++)
	{
		if(9 >= i)
		{
			std::cout << int_word.at(i) << std::endl;
		}
		else
		{
			std::cout << ((0 != (i % 2)) ? ("odd") : ("even")) << std::endl;
		}
	}
	return 0;
}