#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w): name(name), weapon(w)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->getName() << " attacks with his " << this->weapon.getType() << std::endl;
}

std::string	HumanA::getName(void)
{
	return (this->name);
}
