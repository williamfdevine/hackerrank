/**
	@file arrays_left_rotation.cpp
*/

#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> rotateLeft(std::vector<int> to_rotate, int num_rotations)
{
	std::vector<int>::iterator middle = to_rotate.begin() + num_rotations;
	std::rotate(to_rotate.begin(), middle, to_rotate.end());
	return to_rotate;
}

int main()
{

	int length, num_rotations;
	std::cin >> length >> num_rotations;
	std::vector<int> to_rotate(length);

	for(int i = 0; i < to_rotate.size(); i++)
	{
		std::cin >> to_rotate[i];
	}

	std::vector<int> output = rotateLeft(to_rotate, num_rotations);

	for(int i = 0; i < output.size(); i++)
	{
		std::cout << output[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}