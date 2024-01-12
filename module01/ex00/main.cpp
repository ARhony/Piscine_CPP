#include "Zombie.hpp"

int		main(void)
{
	Zombie *z = NULL;

	z = z->newZombie("Zombie1");
	z->announce();
	z->randomChump("Zombie2");
	delete z;
	return (0);
}
