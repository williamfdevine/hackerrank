/**
	@file cpp_class_templates.cpp
*/

template<class T>
class AddElements
{

public:

	AddElements(const T& element): element_(element) {;}
	~AddElements(){;}

	T add(const T& element)
	{
		return element_ + element;
	}

private:

	T element_;

};

template<>
class AddElements<string>
{

public:

	AddElements(const std::string& element): element_(element) {;}
	~AddElements(){;}

	std::string concatenate(const std::string& element)
	{
		return element_ + element;
	}

private:

	std::string element_;

};