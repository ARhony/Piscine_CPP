/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:20:55 by aramon            #+#    #+#             */
/*   Updated: 2024/01/12 15:20:56 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src.getName(), src.getRequiredSign(), src.getRequiredExec())
{
	this->_target = src._target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	if (this == &src)
		return (*this);
	this->_target = src._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream file;
	std::string filename;

	filename = this->_target + "_shrubbery";
	file.open(filename.c_str());
	if (file.is_open())
	{
		file << "      /\\" << std::endl;
		file << "     /  \\" << std::endl;
		file << "    / ^  \\" << std::endl;
		file << "    \\   ^/" << std::endl;
		file << "    /    \\" << std::endl;
		file << "   /    ^ \\" << std::endl;
		file << "   \\      /" << std::endl;
		file << "   /   ^  \\" << std::endl;
		file << "  /  ^     \\" << std::endl;
		file << "  \\________/" << std::endl;
		file << "      ||   " << std::endl;
		file << "      ||   " << std::endl;
		file << "      ||   " << std::endl;
		file << "--------------" << std::endl;
		file << std::endl;
	}
}
