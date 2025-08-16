/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foxy <foxy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:35:06 by ldick             #+#    #+#             */
/*   Updated: 2025/08/16 23:10:46 by foxy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void speak_i(int j)
{
	std::cout << j << std::endl;
}

void speak_c(char j)
{
	std::cout << j << std::endl;
}

int main (void)
{
	int int_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char char_array[5] = {'a', 'b', 'c', 'd', 'h'};
	std::cout << "using int\n" << std::endl;
	::iter(int_array, 10, speak_i);
	std::cout << "\nusing char\n" << std::endl;
	::iter(char_array, 5, speak_c);
}