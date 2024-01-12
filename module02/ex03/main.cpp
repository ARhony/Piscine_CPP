#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a1(0, 0);
	Point b1(3, 0);
	Point c1(0, 3);
	Point t1(1, 1);
	Point t2(3, 3);


	if (bsp(a1, b1, c1, t1))
		std::cout << "valid" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (bsp(a1, b1, c1, t2))
		std::cout << "valid" << std::endl;
	else
		std::cout << "false" << std::endl;

	return 0;
}
