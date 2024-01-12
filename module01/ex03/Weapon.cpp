#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const &Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string newtype)
{
	this->type = newtype;
}
