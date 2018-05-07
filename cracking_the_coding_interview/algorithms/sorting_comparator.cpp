/**
	@file sorting_comparator.cpp
*/

#include <vector>
#include <algorithm>

std::vector<Player> comparator(std::vector<Player> players)
{
	std::sort(players.begin(), players.end(),
			  [](const Player& a, const Player& b) -> bool
			  {
			  		if(a.score != b.score)
			  		{
			  			return (a.score > b.score);
			  		}
			  		else
			  		{
			  			return (a.name < b.name);
			  		}
			  }
		);

	return players;
}