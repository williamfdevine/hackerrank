/**
	@file arrays.cpp
*/

#include <iostream>
#include <string>

int main()
{
	int num_el;
	std::cin >> num_el;
	int array[num_el];

	for(int i = 0; i < num_el; i++)
	{
		std::cin >> array[i];
	}

	for(int i = num_el - 1; i >= 0; i--)
	{
		std::cout << array[i] << " ";
	}

	return 0;
}