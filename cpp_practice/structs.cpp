/**
	@file structs.cpp
*/

#include <iostream>
#include <string>

struct Student
{
	int age_;
	std::string first_name_;
	std::string last_name_;
	int standard_;
	Student():
		age_(0), first_name_(""), last_name_(""), standard_(0)
	{
		;
	}
};

int main()
{
	Student student;
	std::cin >> student.age_;
	std::cin >> student.first_name_;
	std::cin >> student.last_name_;
	std::cin >> student.standard_;

	std::cout << student.age_ << " " << student.first_name_ << " ";
	std::cout << student.last_name_ << " " << student.standard_ << std::endl;
	return 0;
}