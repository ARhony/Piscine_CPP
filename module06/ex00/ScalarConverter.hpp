#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <float.h>
#include <cstdlib>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & src);
		ScalarConverter & operator=(ScalarConverter const & rhs);
		~ScalarConverter();
	public:
		static void	convert(std::string str);
};
