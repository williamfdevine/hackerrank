/**
	@file sorting.cpp
*/

#include <iostream>
#include <vector>
#include <algorithm>

void bubbleSort(std::vector<int>& list)
{
	int num_swaps = 0;
	for(int i = 0; i < list.size(); i++)
	{
		for(int j = 0; j < (list.size() - 1); j++)
		{
			if(list[j] > list[j + 1])
			{
				std::swap(list[j], list[j + 1]);
				num_swaps++;
			}
		}

		if(0 == num_swaps)
		{
			break;
		}
	}

	std::cout << "Array is sorted in " << num_swaps << " swaps." << std::endl;
	std::cout << "First Element: " << list[0] << std::endl;
	std::cout << "Last Element: " << list[list.size() - 1] << std::endl;
}


int main() {
    int num_vals;
    std::cin >> num_vals;

    std::vector<int> vals(num_vals);
    
    for(int i = 0; i < num_vals; i++)
    {
    	std::cin >> vals[i];
    }
    
    bubbleSort(vals);

    return 0;
}