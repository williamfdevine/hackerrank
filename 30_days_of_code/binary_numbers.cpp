/**
	@file binary_numbers.cpp
*/

#include <iostream>

int main()
{
	int num = 0;
	std::cin >> num;

	int answer = 0;
	
	while(0 != num)
	{
		num = num & (num << 1);
		answer++;
	}

	std::cout << answer << std::endl;

	return 0;
}