/**
	@file basic_data_types.cpp
*/

#include <iostream>

int main()
{
	int param_1 = 0;
	long param_2 = 0;
	char param_3 = 0;
	float param_4 = 0.0;
	double param_5 = 0.0;

	std::cin >> param_1 >> param_2 >> param_3 >> param_4 >> param_5;
	std::cout << std::to_string(param_1) << std::endl;
	std::cout << std::to_string(param_2) << std::endl;
	std::cout << param_3 << std::endl;
	std::cout << std::to_string(param_4) << std::endl;
	std::cout << std::to_string(param_5) << std::endl;

	return 0;
}