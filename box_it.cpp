/**
	@file box_it.cpp
*/

class Box
{

public:

	Box(void);
	Box(int length, int breadth, int height);
	Box(const Box& B);
	
	~Box(void);	

	int getLength(void) const;
	int getBreadth(void) const;
	int getHeight(void) const;

	unsigned long long CalculateVolume(void);

	bool operator<(const Box& rhs);
	friend ostream& operator<<(ostream& os, const Box& B);

private:

	int length_;
	int breadth_;
	int height_;

};

Box::Box(void):
	length_(0), breadth_(0), height_(0)
{
	;
}

Box::Box(int length, int breadth, int height):
	length_(length), breadth_(breadth), height_(height)
{
	;
}

Box::Box(const Box& B)
{
	length_ = B.getLength();
	breadth_ = B.getBreadth();
	height_ = B.getHeight();
}

Box::~Box(void)
{
	;
}

int Box::getLength(void) const
{
	return length_;
}

int Box::getBreadth(void) const
{
	return breadth_;
}

int Box::getHeight(void) const
{
	return height_;
}

unsigned long long Box::CalculateVolume(void)
{
	unsigned long long ret_val = ((long long)length_ * (long long)breadth_ * (long long)height_);
	return ret_val;
}

bool Box::operator<(const Box& rhs)
{
	if((getLength() < rhs.getLength()))
	{
		return true;
	}

	if((getBreadth() < rhs.getBreadth()) &&
		(getLength() == rhs.getLength()))
	{
		return true;
	}

	if((getHeight() < rhs.getHeight()) &&
		(getBreadth() == rhs.getBreadth()) &&
		(getLength() == rhs.getLength()))
	{
		return true;
	}

	return false;
}

ostream& operator<<(ostream& os, const Box& B)
{
	os << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
	return os;
}