/**
	@file operators.cpp
*/

#include <iostream>
#include <cmath>

int main()
{
	double meal_cost = 0.0;
	int tip_percent = 0;
	int tax_percent = 0;


	std::cin >> meal_cost >> tip_percent >> tax_percent;
	double tip_percentage = (double)tip_percent / 100.0;
	double tax_percentage = (double)tax_percent / 100.0;

	double total_cost = meal_cost + (tip_percentage * meal_cost);
	total_cost += meal_cost * tax_percentage;

	std::cout << "The total meal cost is " << (int)std::round(total_cost) << " dollars." << std::endl;

	return 0;
}