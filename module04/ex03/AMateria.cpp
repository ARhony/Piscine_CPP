#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(const AMateria & src)
{
	this->_type = src.getType();
}

AMateria & AMateria::operator=(const AMateria & src)
{
	if (this->_type != src.getType())
		this->_type = src.getType();
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{

}

