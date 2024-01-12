/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:20:40 by aramon            #+#    #+#             */
/*   Updated: 2024/01/12 15:20:41 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm *form = NULL;
	std::string _names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm *(Intern::*_funcPTR[3])(std::string target) = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};

	for (int i = 0; i < 3; i++)
	{
		if (name == _names[i])
		{
			form = (this->*_funcPTR[i])(target);
			return (form);
		}
	}
	std::cout << "Cannot create " << name << ", form type not recognize" << std::endl;
	return (NULL);
}

AForm *Intern::makePresidentialPardonForm(std::string target)
{
	AForm *form = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << *form << std::endl;
	return (form);
}

AForm *Intern::makeRobotomyRequestForm(std::string target)
{
	AForm *form = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << *form << std::endl;
	return (form);
}

AForm *Intern::makeShrubberyCreationForm(std::string target)
{
	AForm *form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << *form << std::endl;
	return (form);
}
