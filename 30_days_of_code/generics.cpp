/**
	@file generics.cpp
*/

template<class T>
void printArray(std::vector<T> vec)
{
	for(int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << std::endl;
	}
}