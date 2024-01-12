#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap D("Diamond");

	D.attack("ennemy");
	D.takeDamage(20);
	D.beRepaired(10);
	D.whoAmI();
	return (0);
}
