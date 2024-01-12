#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "ice material create" << std::endl;
}

Ice::Ice(const Ice & src) : AMateria(src)
{
	std::cout << "ice copy material create" << std::endl;
}

Ice & Ice::operator=(const Ice & src)
{
	if (this->_type != src.getType())
		this->_type == src.getType();
	return (*this);
}

Ice::~Ice()
{
	std::cout << "ice material destroy" << std::endl;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
