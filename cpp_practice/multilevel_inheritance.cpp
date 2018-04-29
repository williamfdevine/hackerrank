/**
	@file multilevel_inheritance.cpp
*/

#include <iostream>
#include <algorithm>
#include <stdint.h>

class Triangle
{

public:

	Triangle(void){;}
	~Triangle(void){;}

	void triangle(void)
	{
		std::cout << "I am a triangle" << std::endl;
	}

};

class Isosceles: public Triangle
{

public:

	Isosceles(void){;}
	~Isosceles(void){;}

	void isosceles(void)
	{
		std::cout << "I am an isosceles triangle" << std::endl;
	}

};

class Equilateral: public Isosceles
{

public:

	Equilateral(void){;}
	~Equilateral(void){;}

	void equilateral(void)
	{
		std::cout << "I am an equilateral triangle" << std::endl;
	}

};

int main(void)
{
	Equilateral triangle;

	triangle.equilateral();
	triangle.isosceles();
	triangle.triangle();

	return 0;
}
