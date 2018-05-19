/**
	@file inheritance.cpp
*/

#include <numeric>

class Student: public Person
{

public:

	Student(std::string first_name, std::string last_name, int id, std::vector<int> test_scores);
	char calculate(void);

private:

	vector<int> test_scores_;  

};

Student::Student(std::string first_name, std::string last_name, int id, std::vector<int> test_scores):
	Person(first_name, last_name, id), test_scores_(test_scores)
{
	;
}

char Student::calculate(void)
{
	double average = static_cast<double>(std::accumulate(test_scores_.begin(), test_scores_.end(), 0) / test_scores_.size());
	char grade = 0;

	if(90 <= average && 100 >= average)
	{
		grade = 'O';
	}
	else if(80 <= average && 90 > average)
	{
		grade = 'E';
	}
	else if(70 <= average && 80 > average)
	{
		grade = 'A';
	}
	else if(55 <= average && 70 > average)
	{
		grade = 'P';
	}
	else if(40 <= average && 55 > average)
	{
		grade = 'D';
	}
	else if(40 > average)
	{
		grade = 'T';
	}

	return grade;
}