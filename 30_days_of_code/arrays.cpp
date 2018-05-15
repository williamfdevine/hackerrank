/**
	@file arrays.cpp
*/

#include <iostream>
#include <cstring>

int main(void)
{
	int elements = 0;
	std::cin >> elements;

	int array[elements];
	std::memset(array, 0, elements * sizeof(int));

	for(int i = 0; i < elements; i++)
	{
		std::cin >> array[i];
	}

	for(int i = elements - 1; i >= 0; i--)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}