#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon	&weapon;
	public:
		HumanA(std::string name, Weapon &w);
		~HumanA(void);
		void	attack(void);
		std::string	getName(void);
};

#endif
