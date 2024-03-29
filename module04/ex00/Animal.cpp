#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::string		Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
}

