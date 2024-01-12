#pragma once

#include <string>
#include <stack>
#include <iostream>
#include <algorithm>

class RPN
{
	private:
		RPN();
		RPN(const RPN & ref);
		RPN & operator=(const RPN & ref);
		~RPN();
	public:
		static std::string	testRPN(std::string str);
		static void			calculate(std::string str);
};
