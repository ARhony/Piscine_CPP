/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:01:04 by aramon            #+#    #+#             */
/*   Updated: 2023/09/18 06:17:47 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void	error()
{
	std::cout << "No params required. Ending." << std::endl;
}

static void	add(PhoneBook &ph)
{
	Contact		c;
	std::string	str;

	std::cout << "First name ?" << std::endl;
	std::getline(std::cin, str);
	c.SetFirstName(str);

	std::cout << "Last name ?" << std::endl;
	std::getline(std::cin, str);
	c.SetLastName(str);

	std::cout << "Nickname ?" << std::endl;
	std::getline(std::cin, str);
	c.SetNickName(str);

	std::cout << "Phone number ?" << std::endl;
	std::getline(std::cin, str);
	c.SetPhoneNumber(str);

	std::cout << "Darkest secret ?" << std::endl;
	std::getline(std::cin, str);
	c.SetDarkestSecret(str);

	ph.AddContact(c);
}

std::string format(const std::string str)
{
	int			index = 0;
	int			size = str.size();
	int			blank = 10 - size;
	std::string	ret = "          ";

	while (index < blank)
		index++;
	while (index < 10)
	{
		ret[index] = (index == 9 && size >= 10) ? '.' : str[index - blank];
		index++;
	}
	return (ret);
}

void	search(const PhoneBook &ph)
{
	int	index = 0;

	while (index < ph.GetCurrentSize())
	{
		std::cout << format(ph.GetContacts()[index].GetFirstName()) << "|";
		std::cout << format(ph.GetContacts()[index].GetLastName()) << "|";
		std::cout << format(ph.GetContacts()[index].GetNickName()) << "|";
		std::cout << format(ph.GetContacts()[index].GetPhoneNumber()) << std::endl;
		std::cout << std::endl;
		index++;
	}
}

std::string	request(PhoneBook &ph)
{
	std::string	request;

	std::cout << std::endl << "PhoneBook management :" << std::endl;
	std::cout << "Enter the following commands to get started" << std::endl;
	std::cout << "ADD / SEARCH / EXIT" << std::endl;
	std::getline(std::cin, request);
	if (request == "ADD")
		add(ph);
	else if (request == "SEARCH")
		search(ph);
	return (request);
}

int	main(int ac, char **av)
{
	PhoneBook	ph;

	if (ac != 1)
	{
		error();
		return (1);
	}
	std::cout << av[0];
	while (request(ph) != "EXIT")
		;
	return (0);
}
