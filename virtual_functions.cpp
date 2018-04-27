/**
	@file virtual_functions.cpp
*/
static unsigned int next_id_professor = 1;
static unsigned int next_id_student = 1;

class Person
{

public:

	Person(){;}
	~Person(){;}

	virtual void getdata(void) = 0;
	virtual void putdata(void) = 0;

protected:

	std::string name_;
	unsigned int age_;

};

class Professor: public Person 
{

public:

	Professor()
	{
		curr_id_ = next_id_professor; 
		next_id_professor++;
	}
	~Professor(){;}

	void getdata(void);
	void putdata(void);

private:

	unsigned int publications_;
	unsigned int curr_id_;

};

class Student: public Person
{

public:

	Student()
	{ 
		curr_id_ = next_id_student; 
		next_id_student++; 
	}
	~Student(){;}

	void getdata(void);
	void putdata(void);

private:

	unsigned int marks_[6];
	unsigned int curr_id_;

};

void Professor::getdata(void)
{
	std::cin >> name_;
	std::cin >> age_;
	std::cin >> publications_;
}

void Student::getdata(void)
{
	std::cin >> name_;
	std::cin >> age_;
	for(int i = 0; i < 6; i++)
	{
		std::cin >> marks_[i];
	}
}

void Professor::putdata(void)
{
	std::cout << name_ << " " << age_ << " "; 
	std::cout << publications_ << " " << curr_id_ << std::endl;
}

void Student::putdata(void)
{
	unsigned int sum = 0;
	for(int i = 0; i < 6; i++)
	{
		sum += marks_[i];
	}
	
	std::cout << name_ << " " << age_ << " ";
	std::cout << sum << " " << curr_id_ << std::endl;
}