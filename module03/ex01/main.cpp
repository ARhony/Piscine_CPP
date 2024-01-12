#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap P1("P1");

	P1.attack("ennemy");
	P1.takeDamage(20);
	P1.beRepaired(10);
	P1.guardGate();
	return (0);
}
