/**
	@file inherited_code.cpp
*/

class BadLengthException: public exception
{

public:

	BadLengthException(const int& len):
		msg_(std::to_string(len))
	{
		;
	}

	virtual const char* what() const throw()
	{
		return msg_.c_str();
	}

private:

	std::string msg_;

};