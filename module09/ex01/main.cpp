#include "RPN.hpp"

int main(int argc, char **argv)
{
	std::string str;
	if (argc != 2)
		return (0);
	str = argv[1];
	RPN::calculate(str);
	return 0;
}
