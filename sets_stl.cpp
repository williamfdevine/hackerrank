/**
	@file sets_stl.cpp
*/

#include <iostream>
#include <set>
#include <stdint.h>
#include <algorithm>

typedef enum 
{
	UNUSED = 0,
	ADD = 1,
	REMOVE = 2,
	SEARCH = 3
} type_enum_t;

int main(void)
{
	std::set<int> val_set;

	uint32_t num_queries = 0;
	std::cin >> num_queries;

	for(int i = 0; i < num_queries; i++)
	{
		uint32_t type = 0;
		std::cin >> type;
		switch(type)
		{
			case ADD:
			{
				uint32_t to_add = 0;
				std::cin >> to_add;
				val_set.insert(to_add);
			}
			break;

			case REMOVE:
			{
				uint32_t to_remove = 0;
				std::cin >> to_remove;
				val_set.erase(to_remove);
			}
			break;

			case SEARCH:
			{
				uint32_t to_search = 0;
				std::cin >> to_search;
				std::set<int>::iterator it = val_set.find(to_search);
				if(it != val_set.end())
				{
					std::cout << "Yes" << std::endl;
				}
				else
				{
					std::cout << "No" << std::endl;
				}
			}
			break;

			default:
			break;
		}
	}

	return 0;
}