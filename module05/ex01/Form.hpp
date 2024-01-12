/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:20:03 by aramon            #+#    #+#             */
/*   Updated: 2024/01/12 15:20:04 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_requiredSign;
		const int			_requiredExec;
	public:
		Form();
		Form(std::string name, int requiredSign, int requiredExec);
		Form(Form const & src);
		Form & operator=(Form const & src);
		~Form();

		std::string getName() const;
		bool		getSigned() const;
		int			getRequiredSign() const;
		int			getRequiredExec() const;

		void		beSigned(Bureaucrat & b);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream & o, Form const & src);
