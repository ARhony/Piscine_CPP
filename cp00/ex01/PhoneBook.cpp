/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:48:34 by aramon            #+#    #+#             */
/*   Updated: 2023/09/18 06:17:43 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : iCurrentSize(0) {}

const std::array<Contact, 8>& PhoneBook::GetContacts() const
{
	return (Contacts);
}

void	PhoneBook::AddContact(Contact &c)
{
	int	max = 3;
	int	index = (iCurrentSize == 3) ? GetOldestIndex() : iCurrentSize;

	Contacts[index].SetFirstName(c.GetFirstName());
	Contacts[index].SetLastName(c.GetLastName());
	Contacts[index].SetNickName(c.GetNickName());
	Contacts[index].SetPhoneNumber(c.GetPhoneNumber());
	Contacts[index].SetDarkestSecret(c.GetDarkestSecret());
	if (iCurrentSize < 3)
		iCurrentSize++;
	SetOldestIndex(index + 1 == max ? 0 : index + 1);
}

int	PhoneBook::GetCurrentSize() const
{
	return (iCurrentSize);
}

int	PhoneBook::GetOldestIndex() const
{
	return (oldestIndex);
}

void PhoneBook::SetOldestIndex(const int index)
{
	oldestIndex = index;
}

PhoneBook::~PhoneBook() {}
