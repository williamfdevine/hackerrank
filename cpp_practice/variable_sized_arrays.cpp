/**
	@file variable_sized_arrays.cpp
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main()
{
	unsigned int num_array = 0;
	unsigned int num_query = 0;
	std::cin >> num_array;
	std::cin >> num_query;
	
	std::string array_str[num_array];
	getline(std::cin, array_str[0]);
	for(int i = 0; i < num_array; i++)
	{
		getline(std::cin, array_str[i]);
	}

	std::string query_str[num_query];
	for(int i = 0; i < num_query; i++)
	{
		getline(std::cin, query_str[i]);
		
		int array_num = 0;
		int index = 0;

		std::stringstream ss(query_str[i]);
		ss >> array_num;
		ss >> index;

		std::stringstream arrayss(array_str[array_num]);
		
		int len;
		arrayss >> len;
		int vals[len];

		for(int j = 0; j < len; j++)
		{
			arrayss >> vals[j];
		}
		
		std::cout << vals[index] << std::endl;
	}
	
	return 0;
}
