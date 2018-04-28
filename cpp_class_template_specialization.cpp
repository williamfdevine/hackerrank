/**
	@file cpp_class_template_specialization.cpp
*/

template<> struct 
Traits<Fruit>
{

public:

	static std::string name(int index)
	{
		switch((Fruit)index)
		{
			case Fruit::apple:
			{
				return "apple";
			}
			break;

			case Fruit::orange:
			{
				return "orange";
			}
			break;

			case Fruit::pear:
			{
				return "pear";
			}
			break;

			default:
			{
				return "unknown";
			}
			break;
		}
	}

};

template<> 
struct Traits<Color>
{

public:
	
	static std::string name(int index)
	{
		switch((Color)index)
		{
			case Color::red:
			{
				return "red";
			}
			break;

			case Color::green:
			{
				return "green";
			}
			break;

			case Color::orange:
			{
				return "orange";
			}
			break;

			default:
			{
				return "unknown";
			}
			break;
		}
	}

};