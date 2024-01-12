#include "Zombie.hpp"

int	main()
{
	Zombie *z = NULL;

	z = z->zombieHorde(5, "Zombie");
	for (int i = 0; i < 5; i++)
		z[i].announce();
	std::cout << "delete z" << std::endl;
	delete [] z;
	return (0);
}
