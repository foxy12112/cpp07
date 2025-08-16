/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foxy <foxy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:35:43 by ldick             #+#    #+#             */
/*   Updated: 2025/08/16 23:10:01 by foxy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename func>

void iter(T *array, int size, func f)
{
	for (int i = 0; i < size; i++)
		f(array[i]);
}

#endif