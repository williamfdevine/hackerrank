/**
	maps_stl.cpp
*/

#include <map>
#include <stdint.h>
#include <iostream>
#include <algorithm>
#include <string>

typedef enum 
{
	UNUSED = 0,
	ADD = 1,
	REMOVE = 2,
	PRINT = 3
} type_enum_t;

int main(void)
{
	std::map<std::string, uint32_t> score_map;
	uint32_t num_ops = 0;
	std::cin >> num_ops;

	for(int i = 0; i < num_ops; i++)
	{
		uint32_t type = 0;
		std::string name;
		std::cin >> type >> name;
		
		std::map<std::string, uint32_t>::iterator it = score_map.find(name);

		switch(type)
		{
			case ADD:
			{
				uint32_t score;
				std::cin >> score;

				if(it == score_map.end())
				{
					score_map.insert(std::make_pair(name, score));
				}
				else
				{
					it->second += score;
				}
			}
			break;

			case REMOVE:
			{
				score_map.erase(name);
			}
			break;

			case PRINT:
			{
				if(it == score_map.end())
				{
					std::cout << "0" << std::endl;
				}
				else
				{
					std::cout << it->second << std::endl;
				}
			}
			break;

			default:
			break;
		}
	}
	return 0;
}