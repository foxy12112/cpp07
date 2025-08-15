/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:24:55 by ldick             #+#    #+#             */
/*   Updated: 2025/08/15 17:34:15 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return a;
	if (a > b)
		return b;
	return b;
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return a;
	if (a < b)
		return b;
	return (b);
}

#endif