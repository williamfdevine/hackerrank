#include <unordered_map>
#include <iostream>

const std::string ROOT = "root";
const std::string END_TAG = "</";
const char END_OF_TAG = '>';
const char TAG_SEPARATOR = '.';
const char VAL_SEPARATOR = '~';
const char WHITESPACE = ' ';
const char QUOTE = '"';

class Tag
{

public:

	Tag(std::string name, Tag *parent) : name_(name), parent_(parent) {;}

	std::string get_name(void) {return name_;}
	Tag* get_parent(void) {return parent_;}
	Tag* get_child(std::string name) {return children_[name];}
	std::string get_attribute(std::string name) {return attributes_[name];}

	std::unordered_map<std::string, Tag*> get_children(void) {return children_;}
	std::unordered_map<std::string, std::string> get_attributes(void) {return attributes_;}
	
	void add_child(std::string name, Tag* child) {children_[name] = child;}
	void add_attribute(std::string name, std::string attribute) {attributes_[name] = attribute;}
	
private:

	std::string name_;
	std::unordered_map<std::string, Tag *> children_;
	std::unordered_map<std::string, std::string> attributes_;
	Tag *parent_;

};

bool Search(Tag *start_tag, std::string line, std::string &attribute)
{
	std::string name;
	size_t index = line.find(TAG_SEPARATOR);

	if (index == std::string::npos)
	{
		index = line.find(VAL_SEPARATOR);
	}

	if (index == std::string::npos)
	{
		if (start_tag->get_attributes().count(line) == 0)
		{
			return false;
		}
		else
		{
			attribute = start_tag->get_attribute(line);
			return true;
		}
	}
	else
	{
		name = line.substr(0, index);
		if (start_tag->get_children().count(name) == 0)
		{
			return false;
		}
		else
		{
			return Search(start_tag->get_child(name), line.substr(index + 1), attribute);
		}
	}
}

void RunQueries(Tag* root_tag, int number_of_queries)
{
	for(int i = 0; i < number_of_queries; i++)
	{
		std::string attribute;
		std::string line;
		std::getline(std::cin, line);

		if(line.find(VAL_SEPARATOR) == std::string::npos ||
			false == Search(root_tag, line, attribute))
		{
			std::cout << "Not Found!" << std::endl;
		}
		else
		{
			std::cout << attribute << std::endl;
		}

	}
}

void StripAttribute(size_t& index, std::string& line, std::string& name, std::string& attribute)
{
	std::string chunk;
	index = line.find(QUOTE);
	index = line.find(QUOTE, index + 1);
	chunk = line.substr(0, index + 1);
	line = line.substr(index + 1);
	name = chunk.substr(0, chunk.find(WHITESPACE));
	index = chunk.find(QUOTE);
	attribute = chunk.substr(index + 1);
	attribute = attribute.substr(0, attribute.length() - 1);
}

void ParseFile(Tag* root_tag, int number_of_lines)
{
	Tag *current_tag = root_tag; 
	Tag *next_tag;

	size_t index = 0;
	
	std::string line;
	std::string chunk;
	std::string name; 
	std::string attribute;

	for (int i = 0; i < number_of_lines; i++)
	{
		std::getline(std::cin, line);
		
		if (line.find(END_TAG) == 0)
		{
			current_tag = current_tag->get_parent();
		}
		else
		{
			index = line.find(WHITESPACE);
			if (index == std::string::npos)
			{
				name = line.substr(1);
			}
			else
			{
				name = line.substr(1, index - 1);
			}

			if (name.back() == END_OF_TAG)
			{
				name = name.substr(0, name.length() - 1);
				next_tag = new Tag(name, current_tag);
			}
			else
			{
				line = line.substr(index + 1);
				next_tag = new Tag(name, current_tag);
				while (true)
				{
					StripAttribute(index, line, name, attribute);
					next_tag->add_attribute(name, attribute);

					if (line.front() == END_OF_TAG)
					{
						break;
					}
					else
					{
						line = line.substr(1);
					}
				}
			}
			current_tag->add_child(next_tag->get_name(), next_tag);
			current_tag = next_tag;
		}
	}
}

int main(void)
{
	int number_of_lines = 0;
	int number_of_queries = 0;
	std::cin >> number_of_lines >> number_of_queries;

	std::string line;
	std::getline(std::cin, line); //CLEAR LINE

	Tag root_tag(ROOT, NULL);
	
	ParseFile(&root_tag, number_of_lines);

	RunQueries(&root_tag, number_of_queries);
	
	return 0;
}