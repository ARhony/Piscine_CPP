/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:31:40 by aramon            #+#    #+#             */
/*   Updated: 2024/01/12 15:31:41 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	std::list<int> l;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	int n = 3;
	int	i = easyfind< std::vector<int> >(v, n);
	int	j = easyfind< std::list<int> >(l, n);

	if (i >= 0)
		std::cout << "the element index is " << i << " in the vector" << std::endl;
	else
		std::cout << "Error : unable to find the element in the vector" << std::endl;
	if (j >= 0)
		std::cout << "the element index is " << j << " in the list" << std::endl;
	else
		std::cout << "Error : unable to find the element in the list" << std::endl;
	return (0);
}
