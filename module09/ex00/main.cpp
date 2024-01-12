#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	BitcoinExchange btc;
	(void)argv;

	if (argc != 2)
		std::cout << "Error: could not open file" << std::endl;
	else
		btc.ExchangeValue(argv[1]);
	return 0;
}
