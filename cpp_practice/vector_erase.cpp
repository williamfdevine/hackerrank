/**
	@file vector_erase.cpp
*/

#include <iostream>
#include <vector>
#include <stdint.h>

int main(void)
{
	std::vector<uint32_t> vals;
	
	uint32_t num_vals;
	std::cin >> num_vals;

	uint32_t curr_val;
	for(int i = 0; i < num_vals; i++)
	{
		std::cin >> curr_val;
		vals.push_back(curr_val);
	}

	uint32_t element;
	uint32_t range_begin;
	uint32_t range_end;
	std::cin >> element >> range_begin >> range_end;

	vals.erase(vals.begin() + element - 1);
	vals.erase(vals.begin() + range_begin - 1, vals.begin() + range_end - 1);

	std::cout << vals.size() << std::endl;
	for(int i = 0; i < vals.size(); i++)
	{
		std::cout << vals.at(i) << " ";
	}
	std::cout << std::endl;

	return 0;
}