#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
		~PresidentialPardonForm();

		void execute(Bureaucrat const & executor) const;
};
