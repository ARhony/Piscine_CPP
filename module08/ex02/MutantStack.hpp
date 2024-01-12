/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:31:52 by aramon            #+#    #+#             */
/*   Updated: 2024/01/12 15:31:53 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack<T> const & src);
		MutantStack<T> & operator=(MutantStack<T> const & src);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & src) : std::stack<T>(src)
{
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & src)
{
	if (this != &src)
		this = src;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

