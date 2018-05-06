/**
	@file strings_making_anagrams.cpp
*/

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>

int getNumDeleted(std::vector<int> a, std::vector<int> b)
{
	int num_deleted = 0;
	for(int i = 0; i < 26; i++)
	{
		if(a[i] == b[i])
		{
			continue;
		}
		else if(a[i] > b[i])
		{
			num_deleted += a[i] - b[i];
		}
		else if(a[i] < b[i])
		{
			num_deleted += b[i] - a[i];
		}
		else
		{
			throw std::runtime_error("SHOULD NEVER GET HERE...");
		}
	}
	return num_deleted;
}

int main()
{

	std::string a;
	std::cin >> a;
	std::string b;
	std::cin >> b;

	std::vector<int> num_letters_a(26);
	std::vector<int> num_letters_b(26);

	for(int i = 0; i < a.length(); i++)
	{
		num_letters_a[((int)a[i] - (int)'a')] += 1;
	}

	for(int i = 0; i < b.length(); i++)
	{
		num_letters_b[((int)b[i] - (int)'a')] += 1;
	}

	std::cout << getNumDeleted(num_letters_a, num_letters_b) << std::endl;

	return 0;
}