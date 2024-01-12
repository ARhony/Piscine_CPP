#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie z;

	z.setName(name);
	z.announce();
}
