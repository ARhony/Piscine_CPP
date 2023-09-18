/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:29:33 by aramon            #+#    #+#             */
/*   Updated: 2023/09/18 06:23:43 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:

		Contact();
		void	SetFirstName(const std::string& str);
		void	SetLastName(const std::string& str);
		void	SetNickName(const std::string& str);
		void	SetPhoneNumber(const std::string& str);
		void	SetDarkestSecret(const std::string& str);
		std::string	GetFirstName() const;
		std::string	GetLastName() const;
		std::string	GetNickName() const;
		std::string	GetPhoneNumber() const;
		std::string	GetDarkestSecret() const;
		~Contact();
};

#endif
