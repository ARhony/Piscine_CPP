#include "Point.hpp"

Point::Point(void)
{
}

Point::Point(float const a, float const b) : x(a), y(b)
{
}

Point::Point(Point const &p) : x(p.getPointx()), y(p.getPointy())
{
}

Point & Point::operator=(Point &rhs)
{
	return (rhs);
}

Point::~Point()
{
}

Fixed	Point::getPointx(void) const
{
	return this->x;
}

Fixed	Point::getPointy(void) const
{
	return this->y;
}
