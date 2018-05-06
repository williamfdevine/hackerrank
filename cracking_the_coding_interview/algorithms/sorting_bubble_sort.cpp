/**
	@file sorting_bubble_sort.cpp
*/

#include <vector>
#include <algorithm>
#include <iostream>

void bubbleSort(std::vector<int> values)
{
	int num_swaps = 0;
	for(int i = 0; i < values.size(); i++)
	{
		for(int j = 0; j < values.size() - 1; j++)
		{
			if(values[j] > values[j + 1])
			{
				std::swap(values[j], values[j + 1]);
				num_swaps++;
			}
		}
	}

	std::cout << "Array is sorted in " << num_swaps << " swaps." << std::endl;
	std::cout << "First Element: " << values.at(0) << std::endl;
	std::cout << "Last Element: " << values.at(values.size() - 1) << std::endl;
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

	bubbleSort(values);

	return 0;
}