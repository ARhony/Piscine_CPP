/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:31:06 by aramon            #+#    #+#             */
/*   Updated: 2024/01/12 15:31:07 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
