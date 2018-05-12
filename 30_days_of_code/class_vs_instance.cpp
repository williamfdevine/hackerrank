/**
	@file class_vs_instance.cpp
*/

class Person
{

public:

	Person(int initial_age)
	{
		if(0 > initial_age)
		{
			age_ = 0;
			std::cout << "Age is not valid, setting age to 0." << std::endl;
		}
		else
		{
			age_ = initial_age;
		}
	}

	~Person(){;}

	void yearPasses(void) {age_ += 1;}

	void amIOld(void)
	{
		if(13 > age_)
		{
			std::cout << "You are young." << std::endl;
		}
		else if(13 <= age_ && 18 > age_)
		{
			std::cout << "You are a teenager." << std::endl;
		}
		else
		{
			std::cout << "You are old." << std::endl;
		}
	}

private:

	int age_;

};