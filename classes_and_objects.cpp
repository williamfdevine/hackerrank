/**
	@file classes_and_objects.cpp
*/

class Student
{

public:

	Student(){;}
	~Student(){;}

	void input(void)
	{
		std::cin >> scores_[0] >> scores_[1];
		std::cin >> scores_[2] >> scores_[3];
		std::cin >> scores_[4];
	}

	int calculateTotalScore(void)
	{
		return (scores_[0] + scores_[1] + scores_[2] +
				scores_[3] + scores_[4]);
	}

private:

	int scores_[5] = {0};

};