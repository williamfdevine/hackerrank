/**
	@file bit_array.cpp
*/

#include <iostream>
#include <vector>

const unsigned int mod = (1 << 31);

int main()
{
	long N, S, P, Q;
	std::cin >> N >> S >> P >> Q;

	std::vector<bool> is_used(mod);
	int unique = 1;
	unsigned long element = S % mod;
	is_used[element] = true;

	for(int i = 1; i < N; i++)
	{
		element = (element * P + Q) % mod;
		if(true == is_used[element])
		{
			continue;
		}
		else
		{
			unique++;
			is_used[element] = true;
		}
	}

	std::cout << unique << std::endl;
	return 0;	
}