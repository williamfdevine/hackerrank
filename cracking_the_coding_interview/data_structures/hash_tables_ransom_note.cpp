/**
	@file hash_tables_ransome_note.cpp
*/

#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

static std::unordered_map<std::string, int> magazine_map;

void createMap(std::vector<std::string> magazine)
{
	for(int i = 0; i < magazine.size(); i++)
	{
		auto iterator = magazine_map.find(magazine[i]);

		if(magazine_map.end() == iterator)
		{
			magazine_map.insert(std::pair<std::string, int>(magazine[i],1));
		}
		else
		{
			magazine_map[magazine[i]]++;
		}
	}
}

bool canMakeNote(std::vector<std::string> magazine, std::vector<std::string> ransom_note)
{
	createMap(magazine);

	for(int i = 0; i < ransom_note.size(); i++)
	{
		auto iterator = magazine_map.find(ransom_note[i]);
		if(iterator == magazine_map.end() || 
			iterator->second == 0)
		{
			return false;
		}
		magazine_map[ransom_note[i]]--;
	}

	return true;
}

int main()
{
	int words_in_magazine = 0, words_in_ransom_note = 0;
	std::cin >> words_in_magazine >> words_in_ransom_note;

	std::vector<std::string> magazine(words_in_magazine);
	std::vector<std::string> ransom_note(words_in_ransom_note);

	for(int i = 0; i < words_in_magazine; i++)
	{
		std::cin >> magazine[i];
	}

	for(int i = 0; i < words_in_ransom_note; i++)
	{
		std::cin >> ransom_note[i];
	}

	if(true == canMakeNote(magazine, ransom_note))
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

	return 0;
}