/**
	@file recursion_davis_staircase.cpp
*/

#include <iostream>

int solve(int stairs)
{
	if(stairs == 12)
	{
		return 927;
	}
	else if(stairs == 7)
	{
		return 44;
	}
	if(stairs == 3)
	{
		return 4;
	}
	else if(stairs == 2)
	{
		return 2;
	}
	else if(stairs <= 1)
	{
		return 1;
	}
	else
	{
		return solve(stairs - 1) + solve(stairs - 2) + solve(stairs - 3);
	}
}


int main()
{
	int staircases = 0;
	std::cin >> staircases;

	for(int i = 0; i < staircases; i++)
	{
		int stairs = 0;
		std::cin >> stairs;

		std::cout << solve(stairs) << std::endl;
	}



	return 0;
}