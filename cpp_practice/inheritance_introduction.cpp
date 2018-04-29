/**
	inheritance_introduction.cpp
*/

#include <iostream>

class Triangle
{
public:
	void triangle()
	{
		std::cout<<"I am a triangle" << std::endl;
	}
};

class Isosceles : public Triangle
{
public:
	void isosceles(void)
	{
		std::cout<<"I am an isosceles triangle" << std::endl;
	}
    
    void description(void)
    {
    	std::cout << "In an isosceles triangle two sides are equal" << std::endl;
    }
};

int main(){
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();
    return 0;
}
