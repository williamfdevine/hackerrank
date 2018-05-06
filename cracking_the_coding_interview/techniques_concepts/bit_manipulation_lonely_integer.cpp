/**
	@file bit_manipulation_lonely_integer.cpp
*/

#include <vector>
#include <iostream>

int findLonely(std::vector<int> values)
{
	int lonely = 0;

	for(int i = 0; i < values.size(); i++)
	{
		lonely ^= values[i];
	}

	return lonely;
}

int main()
{
	int num_values = 0;
	std::cin >> num_values;

	std::vector<int> values(num_values);

	for(int i = 0; i < num_values; i++)
	{
		std::cin >> values[i];
	}

	std::cout << findLonely(values) << std::endl;

	return 0;
}