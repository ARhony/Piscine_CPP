#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog( Dog const & src );
		~Dog();
		Dog &		operator=( Dog const & rhs );

		void		makeSound() const;
};
