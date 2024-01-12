#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string		_type;
	public:
		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();
		WrongAnimal &		operator=( WrongAnimal const & rhs );

		std::string		getType() const;
		void		makeSound() const;
};
