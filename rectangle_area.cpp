/**
	rectangle_area.cpp
*/

class Rectangle
{

public:

	Rectangle(){;}
	~Rectangle(){;}

	virtual void display(void)
	{
		std::cout << width_ << " " << height_ << std::endl;
	}
	
protected:

	uint32_t width_;
	uint32_t height_;

};

class RectangleArea: public Rectangle
{

public:

	RectangleArea(){;}
	~RectangleArea(){;}

	void read_input(void)
	{
		std::cin >> width_ >> height_;
	}

	void display(void)
	{
		std::cout << (uint64_t)((uint64_t)width_ * (uint64_t)height_) << std::endl;
	}

};