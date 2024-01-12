#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern & operator=(Intern const & rhs);

		AForm *makeForm(std::string name, std::string target);
		AForm *makePresidentialPardonForm(std::string target);
		AForm *makeRobotomyRequestForm(std::string target);
		AForm *makeShrubberyCreationForm(std::string target);
};
