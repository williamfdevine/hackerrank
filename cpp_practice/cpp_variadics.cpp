/**
	@file cpp_variadics.cpp
*/

#include <math.h>
#include <initializer_list>
#include <stdarg.h>

template<bool...digits>
int variadic_reverse_binary_value(int count, ...)
{
	int sum = 0;
	va_list arg_list;
	
	va_start(arg_list, count);
	for(int i = 0; i < count; i++)
	{
		sum += va_arg(arg_list, int) * pow(2, i);
	}
	va_end(arg_list);

	return sum;
}

template<bool...digits>
int reversed_binary_value(...)
{
	return variadic_reverse_binary_value(sizeof...(digits), digits...);
}