/**
	@file stringstream.cpp
*/

#include <sstream>
#include <vector>
#include <iostream>

static void parseInts(std::string str)
{
	std::stringstream ss(str);
	std::vector<int> vec;
	int next_int = 0;

	while(ss >> next_int)
	{
		vec.push_back(next_int);
		if(ss.peek() == ',')
		{
			ss.ignore();
		}
	}

	for(int i = 0; i < vec.size(); i++)
	{
		std::cout << vec.at(i) << std::endl;
	}
}

int main()
{
	std::string str;
	std::cin >> str;

	parseInts(str);

	return 0;
}