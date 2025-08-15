/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:35:43 by ldick             #+#    #+#             */
/*   Updated: 2025/08/15 17:44:58 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>

void iter(T *array, T size, T (*f)(T))
{
	for (int i = 0; i < size; i++)
		f(array[i])
}

#endif