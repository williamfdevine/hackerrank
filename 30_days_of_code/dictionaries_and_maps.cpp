/**
	@file dictionaries_and_maps.cpp
*/

#include <iostream>
#include <map>

typedef std::map<std::string, std::string> PhoneBook;
typedef std::map<std::string, std::string>::iterator PhoneBookIterator;
PhoneBook phone_book;

void processQuery(const std::string& name)
{
	PhoneBookIterator it = phone_book.find(name);
	if(it != phone_book.end())
	{
		std::cout << it->first << "=" << it->second << std::endl;
	}
	else
	{
		std::cout << "Not found" << std::endl;
	}
}

int main()
{
	int num_entries = 0;
	std::cin >> num_entries;

	std::string name;
	std::string number;

	for(int i = 0; i < num_entries; i++)
	{
		std::cin >> name >> number;
		phone_book.insert({name, number});
	}
	std::getline(std::cin, number); // JUST TO CLEAR AN ENDL;
	
	while(std::cin >> name)
	{
		processQuery(name);
	}

	return 0;
}