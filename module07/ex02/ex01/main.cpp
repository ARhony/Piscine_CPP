/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:28:10 by aramon            #+#    #+#             */
/*   Updated: 2024/01/12 15:28:11 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void	addone(T &i)
{
	i++;
}

template <typename T>
void	print(T &i)
{
	std::cout << i;
	return;
}

int	main()
{
	int array[] = {1,2,3,4,5,6,7};
	char str[] = "kiffance";

	iter(array, 7, print<int>);
	std::cout << std::endl;
	iter(array, 7, addone<int>);
	std::cout << "addone use" << std::endl;
	iter(array, 7, print<int>);
	std::cout << std::endl;
	iter(str, 8, print<char>);
	std::cout << std::endl;
	return (0);
}
