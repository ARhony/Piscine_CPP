/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:27:56 by aramon            #+#    #+#             */
/*   Updated: 2024/01/12 15:27:57 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> void iter(T *array, int lenght, void (*function)(T&))
{
	for (int i = 0; i < lenght; i++)
		function(array[i]);
}
