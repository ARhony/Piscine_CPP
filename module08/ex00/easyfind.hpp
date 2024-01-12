#pragma once

#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iostream>

template <typename T> int easyfind(T c, int n)
{
	typename T::const_iterator it;

	it = std::find (c.begin(), c.end(), n);
	if (it == c.end() && *it != n)
		return (-1);
	else
		return (*it);
	return (-1);
}
