#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		nb_contact;
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact(Contact newcontact);
		void	search_contact(int n);
		void	printf_contact();
};

#endif
