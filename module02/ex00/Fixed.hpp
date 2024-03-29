#pragma once

#include <iostream>

class Fixed
{
	private:
		int					fixedPointValue;
		static const int	fractionalBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const & src);
		Fixed & operator=(Fixed const & rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
