/**
	@file functions.cpp
*/

#include <iostream>
#include <algorithm>

static int max_of_four(int a, int b, int c, int d)
{
	int result = 0;
	result = std::max(a, b);
	result = std::max(result, c);
	return std::max(result, d);
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;
	std::cout << std::to_string(max_of_four(a, b, c, d));
	return 0;
}