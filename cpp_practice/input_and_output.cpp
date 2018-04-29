/**
	@file input_and_output.cpp
*/

#include <iostream>

int main()
{
	int param_1 = 0;
	int param_2 = 0;
	int param_3 = 0;
	int sum = 0;
	std::cin >> param_1 >> param_2 >> param_3;
	
	std::cout << std::to_string(param_1 + param_2 + param_3);
	return 0;
}