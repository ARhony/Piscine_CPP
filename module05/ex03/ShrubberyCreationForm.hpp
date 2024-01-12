#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;
};
