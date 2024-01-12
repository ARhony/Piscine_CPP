#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "cure material create" << std::endl;
}

Cure::Cure(const Cure & src) : AMateria(src)
{
	std::cout << "cure copy material create" << std::endl;
}

Cure & Cure::operator=(const Cure & src)
{
	if (this->_type != src.getType())
		this->_type == src.getType();
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure material destroy" << std::endl;
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}


void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
