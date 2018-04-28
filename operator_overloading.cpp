/**
	@file operator_overloading.cpp
*/

#include <stdint.h>
#include <vector>
#include <exception>

class Matrix
{

public:

	Matrix(){;}
	~Matrix(){;}

	std::vector<std::vector<int>> a;
	
};

Matrix operator+(const Matrix& m1, const Matrix& m2)
{
	Matrix ret_val;

	for(int i = 0; i < m1.a.size(); i++)
	{
		std::vector<int> row1 = m1.a.at(i);
		std::vector<int> row2 = m2.a.at(i);
		std::vector<int> row_res;
		for(int j = 0; j < row1.size(); j++)
		{
			row_res.push_back(row1.at(j) + row2.at(j));
		}
		ret_val.a.push_back(row_res); 
	}

	return ret_val;
}