/**
	@file pointer.cpp
*/

#include <iostream>
#include <algorithm>

static void update(int* a, int* b)
{
	int temp_a = *a + *b;
	int temp_b = std::abs(*a - *b);
	*a = temp_a;
	*b = temp_b;
}

int main()
{
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	update(&a, &b);
	std::cout << a << std::endl << b;
	return 0;
}