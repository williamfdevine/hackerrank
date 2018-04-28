/**
	@file lower_bound_stl.cpp
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdint.h>

int main(void)
{
	std::vector<uint32_t> vals;
	
	uint32_t num_vals = 0;
	std::cin >> num_vals;
	
	uint32_t curr_val = 0;
	for(int i = 0; i < num_vals; i++)
	{
		std::cin >> curr_val;
		vals.push_back(curr_val);
	}

	std::vector<uint32_t> queries;
	uint32_t num_queries = 0;
	std::cin >> num_queries;
	for(int i = 0; i < num_queries; i++)
	{
		std::cin >> curr_val;
		queries.push_back(curr_val);
	}

	for(int i = 0; i < num_queries; i++)
	{
		std::vector<uint32_t>::iterator it = std::lower_bound(vals.begin(), vals.end(), queries.at(i));
		if(*it == queries.at(i))
		{
			std::cout << "Yes ";
		}
		else
		{
			std::cout << "No ";
		}
		std::cout << std::distance(vals.begin(), it) + 1 << std::endl;
	}

	return 0;
}