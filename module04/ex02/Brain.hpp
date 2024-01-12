#pragma once

#include <iostream>

class Brain
{
	private:
		std::string			_ideas[100];
	public:
		Brain();
		Brain( const Brain & src );
		~Brain();
		Brain &				operator=( Brain const & rhs );

		std::string			getIdea(int i) const;
};
