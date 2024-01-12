#include "ClapTrap.hpp"

int main()
{
	ClapTrap P1("P1");
	ClapTrap P2("P2");

	P1.attack("P2");
	P2.takeDamage(10);
	P2.beRepaired(10);
	return (0);
}
