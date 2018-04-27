/**
	@file exceptional_server.cpp
*/

try
{
	std::cout << Server::compute(A, B) << std::endl;
}
catch(std::bad_alloc& e)
{
	std::cout << "Not enough memory" << std::endl;
}
catch(std::exception& e)
{
	std::cout << "Exception: " << e.what() << std::endl;
}
catch(...)
{
	std::cout << "Other Exception" << std::endl;
}