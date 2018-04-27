/**
	@file attribute_parser.cpp
	@author Bill Devine
*/

#include <vector>
#include <sstream>
#include <iostream>

int main()
{
	int tags = 0;
	int queries = 0;

	std::vector<std::string> tag_vec;
	std::vector<std::string> query_vec;
	std::string input_str;
	std::getline(std::cin, input_str);

	std::stringstream ss(input_str);
	ss >> tags >> queries;
	ss.clear();

	for(int i = 0; i < tags; i++)
	{
		std::getline(std::cin, input_str);
		tag_vec.push_back(input_str);
		//std::cout << input_str << std::endl;
	}

	for(int i = 0; i < queries; i++)
	{
		std::getline(std::cin, input_str);
		query_vec.push_back(input_str);
		//std::cout << input_str << std::endl;
	}

	for(int i = 0; i < queries; i++)
	{
		std::string curr_query = query_vec.at(i);
		std::cout << "CURR QUERY = " << curr_query << std::endl; 
		int idx = 0;
		if(std::string::npos != (idx = curr_query.find('.')))
		{
			std::cout << "Find In - " << curr_query.substr(0, idx) << std::endl;
			std::cout << curr_query.substr(idx + 1, curr_query.length()) << std::endl;
		}
	}

	//std::cout << input << std::endl;
	return 0;
}