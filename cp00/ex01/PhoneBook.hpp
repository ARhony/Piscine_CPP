/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 21:26:37 by aramon            #+#    #+#             */
/*   Updated: 2023/09/18 06:23:41 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	private:
		std::array<Contact, 8>	Contacts;
		int	iCurrentSize;
		int	oldestIndex;
	public:
		PhoneBook();
		const std::array<Contact, 8>& GetContacts() const;
		void AddContact(Contact &c);
		int	GetCurrentSize() const;
		int GetOldestIndex() const;
		void	SetOldestIndex(const int index);
		~PhoneBook();
};

#endif
