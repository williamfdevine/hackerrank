/**
	@file abstract_classes.cpp
*/

class MyBook: public Book 
{

public:

	MyBook(std::string title, std::string author, int price):
		Book(title, author), price_(price) {;}

	void display(void)
	{
		std::cout << "Title: " << title << std::endl;
		std::cout << "Author: " << author << std::endl;
		std::cout << "Price: " << price_ << std::endl;
	}

private:

	int price_;

};
