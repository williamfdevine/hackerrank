/**
	@file time_complexity_primality.cpp
*/

#include <iostream>
#include <cmath>

bool isPrime(int n)
{
	if(n <= 3 && n > 1)
	{
		return true;
	}
	else if(n <= 1 ||
			n % 2 == 0 ||
			n % 3 == 0)
	{
		return false;
	}
	else
	{
		int j = 5;
		while(std::pow(j, 2) <= n)
		{
			if(n % j == 0 ||
				n % (j + 2) == 0)
			{
				return false;
			}
			j += 6;
		}
	}

	return true;
}

int main()
{

	int num_trials = 0;
	std::cin >> num_trials;

	for(int i = 0; i < num_trials; i++)
	{
		int curr = 0;
		std::cin >> curr;

		std::cout << ((isPrime(curr)) ? ("Prime") : ("Not prime")) << std::endl;
	}

	return 0;
}