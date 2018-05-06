/**
	@file recursion_fibonacci_numbers.cpp
*/

#include <iostream>

int fibonacci(int iterations)
{
	if(iterations == 1)
	{
		return 1;
	}
	else if(iterations == 0)
	{
		return 0;
	}
	else
	{
		return fibonacci(iterations - 1) + fibonacci(iterations - 2);
	}
}

int main()
{
	int iterations = 0;
	std::cin >> iterations;
	std::cout << fibonacci(iterations);
	return 0;
}