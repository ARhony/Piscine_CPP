#pragma once

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &p);
		Point & operator=(Point &rhs);
		~Point();
		Fixed	getPointx(void) const;
		Fixed	getPointy(void) const;
};
