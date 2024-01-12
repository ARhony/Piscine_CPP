#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *alpha = NULL;
	Bureaucrat *beta = NULL;
	Bureaucrat *sigma = NULL;

	try
	{
		alpha = new Bureaucrat("alpha", 1);
		std::cout << *alpha << std::endl;
		alpha->incrementGrade();
		std::cout << *alpha << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		beta = new Bureaucrat("beta", 150);
		std::cout << *beta << std::endl;
		beta->incrementGrade();
		std::cout << *beta << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		sigma = new Bureaucrat("sigma", 151);
		std::cout << *sigma << std::endl;
		sigma->incrementGrade();
		std::cout << *sigma << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	if (alpha)
		delete alpha;
	if (beta)
		delete beta;
	if (sigma)
		delete	sigma;
}
