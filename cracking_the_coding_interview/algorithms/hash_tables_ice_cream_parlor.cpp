/**
	@file hash_tables_ice_cream_parlor.cpp
*/

#include <bits/stdc++.h>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

typedef std::multimap<int, int> CostMap;
typedef std::multimap<int,int>::iterator CostMapIt;
typedef std::multimap<int,int>::value_type CostMapVal;

void solve(std::vector<int> costs, int money)
{
	CostMap cost_map;
	for(int i = 0; i < costs.size(); i++)
	{
		cost_map.insert(std::make_pair(costs[i], i + 1));
	}

	CostMapIt it = cost_map.begin();
	CostMapIt end_loop = std::prev(cost_map.end(), 1);

	int flavor_1 = -1, flavor_2 = -1;
	for(CostMapIt it = cost_map.begin(); it != end_loop; it++)
	{
		int curr_money = money - it->first;
		auto range = cost_map.equal_range(curr_money);

		for(CostMapIt it2 = range.first; it2 != range.second; ++it2)
		{
			if(it2 != it)
			{
				flavor_1 = it->second;
				flavor_2 = it2->second;
			}
		}
	}

	if(flavor_1 > 0 && flavor_2 > 0)
	{
		std::cout << ((flavor_1 < flavor_2) ? flavor_1 : flavor_2);
		std::cout << " ";
		std::cout << ((flavor_1 < flavor_2) ? flavor_2 : flavor_1);
		std::cout << std::endl;
	}
}

int main()
{
	int num_trips = 0;
	std::cin >> num_trips;

	for(int i = 0; i < num_trips; i++)
	{
		int money = 0, flavors = 0;
		std::cin >> money >> flavors;
		std::vector<int> costs(flavors);

		for(int j = 0; j < flavors; j++)
		{
			std::cin >> costs[j];
		}

		solve(costs, money);
	}

	return 0;
}