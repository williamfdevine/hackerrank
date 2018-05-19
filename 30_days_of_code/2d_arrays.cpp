/**
	@file 2d_arrays.cpp
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int array[6][6] = {0};

	for(int i = 0; i < 6; i++)
	{
		std::cin >> array[i][0];
		std::cin >> array[i][1];
		std::cin >> array[i][2];
		std::cin >> array[i][3];
		std::cin >> array[i][4];
		std::cin >> array[i][5];
	}

	std::vector<int> sum_vec;

	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			int sum = array[i][j] + array[i][j + 1] + array[i][j + 2];
			sum += array[i + 1][j + 1];
			sum += array[i + 2][j] + array[i + 2][j + 1] + array[i + 2][j + 2];
			sum_vec.push_back(sum);
			sum = 0;
		}
	}

	std::sort(sum_vec.begin(), sum_vec.end());
	std::cout << sum_vec.back() << std::endl;
	
	return 0;
}