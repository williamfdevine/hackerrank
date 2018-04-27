/**
	@file classes.cpp
*/

#include <string>
#include <iostream>

struct student
{
	int age_;
	std::string first_name_;
	std::string last_name_;
	int standard_;
	student():
		age_(0), first_name_(""), last_name_(""), standard_(0)
	{
		;
	}
};

class Student
{

public:

	Student(){;}
	~Student(){;}
	
	int get_age(void) {return student_.age_;}
	void set_age(int age) {student_.age_ = age;}

	std::string get_first_name(void){return student_.first_name_;}
	void set_first_name(std::string first_name){student_.first_name_ = first_name;}

	std::string get_last_name(void){return student_.last_name_;}
	void set_last_name(std::string last_name){student_.last_name_ = last_name;}

	int get_standard(void) {return student_.standard_;}
	void set_standard(int standard) {student_.standard_ = standard;}

	std::string to_string(void)
	{
		std::string ret_val = std::to_string(student_.age_) + ",";
		ret_val += student_.first_name_ + ",";
		ret_val += student_.last_name_ + ",";
		ret_val += std::to_string(student_.standard_);
		return ret_val;
	}

private:

	student student_;

};


int main() 
{
    int age = 0; 
    int standard = 0;
    std::string first_name;
    std::string last_name;
    
    std::cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    std::cout << st.get_age() << "\n";
    std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    std::cout << st.get_standard() << "\n";
    std::cout << "\n";
    std::cout << st.to_string();
    
    return 0;
}