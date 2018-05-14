/**
	@file lets_review.cpp
*/

#include <iostream>
#include <string>

void processString(const std::string& test_case)
{
	std::string even;
	std::string odd;

	for(int i = 0; i < test_case.length(); i++)
	{
		if(i % 2 == 0)
		{
			even += test_case[i];
		}
		else
		{
			odd += test_case[i];
		}
	}

	std::cout << even << " " << odd << std::endl;
}

int main(void)
{
	int test_cases = 0;
	std::cin >> test_cases;

	std::string test_case;
	std::getline(std::cin, test_case);

	for(int i = 0; i < test_cases; i++)
	{
		std::getline(std::cin, test_case);
		processString(test_case);
	}

	return 0;
}