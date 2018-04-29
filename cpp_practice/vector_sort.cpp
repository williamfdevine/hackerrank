/**
	@file vector_sort.cpp
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::vector<int> vals;

	unsigned int num_vals = 0;
	std::cin >> num_vals;
	
	int curr_val = 0;
	for(int i = 0; i < num_vals; i++)
	{
		std::cin >> curr_val;
		vals.push_back(curr_val);
		curr_val = 0;
	}

	std::sort(vals.begin(), vals.end());

	for(int i = 0; i < num_vals; i++)
	{
		std::cout << vals.at(i) << " ";
	}

	std::cout << std::endl;

	return 0;
}