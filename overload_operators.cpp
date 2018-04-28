/**
	@file overload_operators.cpp
*/	

Complex operator+(const Complex& num_1, const Complex& num_2)
{
	Complex ret_val;
	ret_val.a = num_1.a + num_2.a;
	ret_val.b = num_1.b + num_2.b;
	return ret_val;
}

std::ostream& operator<<(std::ostream& os, const Complex& num)
{
	os << num.a << "+i" << num.b << std::endl;
	return os;
}
