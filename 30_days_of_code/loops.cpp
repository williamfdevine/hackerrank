/**
	@file loops.cpp
*/

#include <iostream>

int main()
{

	int n = 0;
	std::cin >> n;

	for(int i = 1; i <= 10; i++)
	{
		std::cout << n << " x " << i << " = " << (n * i) << std::endl;
	}

	return 0;
}