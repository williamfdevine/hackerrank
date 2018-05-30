/**
	@file more_exceptions.cpp
*/

class Calculator
{

public:

	Calculator(){;}
	~Calculator(){;}

	int power(int num, int pow)
	{
		if(num < 0 || pow < 0)
		{
			throw std::runtime_error("n and p should be non-negative");
		}

		return std::pow(num, pow);
	}

};