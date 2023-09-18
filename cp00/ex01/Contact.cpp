/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:43:46 by aramon            #+#    #+#             */
/*   Updated: 2023/09/17 16:57:22 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

void	Contact::SetFirstName(const std::string& str)
{
	first_name = str;
}

void	Contact::SetLastName(const std::string& str)
{
	last_name = str;
}

void	Contact::SetNickName(const std::string& str)
{
	nickname = str;
}

void	Contact::SetPhoneNumber(const std::string& str)
{
	phone_number = str;
}

void	Contact::SetDarkestSecret(const std::string& str)
{
	darkest_secret = str;
}

std::string	Contact::GetFirstName() const
{
	return (first_name);
}

std::string	Contact::GetLastName() const
{
	return (last_name);
}

std::string	Contact::GetNickName() const
{
	return (nickname);
}

std::string	Contact::GetPhoneNumber() const
{
	return (phone_number);
}

std::string	Contact::GetDarkestSecret() const
{
	return (darkest_secret);
}

Contact::~Contact() {}
