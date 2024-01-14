/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:27:31 by aramon            #+#    #+#             */
/*   Updated: 2024/01/13 17:56:53 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	return;
}

Serializer::Serializer(Serializer const & src)
{
	*this = src;
	return;
}

Serializer & Serializer::operator=(Serializer const & rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return *this;
}

Serializer::~Serializer(void)
{
	return;
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	uintptr_t	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data	*ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}
