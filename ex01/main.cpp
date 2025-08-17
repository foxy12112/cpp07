/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:35:06 by ldick             #+#    #+#             */
/*   Updated: 2025/08/17 12:39:09 by ldick            ###   ########.fr       */
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

void speak_char_str(char *j)
{
	std::cout << j << std::endl;
}

void	speak_str(std::string j)
{
	std::cout << j << std::endl;
}

void	manipulate_int(int &i)
{
	i += 5;
}

void	speak_const_char_str(const char* j)
{
	std::cout << j << std::endl;
}

int main (void)
{
	int int_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char char_array[5] = {'a', 'b', 'c', 'd', 'h'};
	char *char_str_array[3] = {const_cast<char*>("im string 1"), const_cast<char*>("im string 2"), const_cast<char*>("im string 3")};
	const char *const_char_str_array[3] = {"im the const string 1", "im the const string 2", "im the const string 3"};
	std::string str_array[3] = {"im string 1 but std::str", "im string 2 but std::string", "im string 3 but std::string"};
	std::cout << "using int\n" << std::endl;
	::iter(int_array, 10, speak_i);
	std::cout << "\nusing char\n" << std::endl;
	::iter(char_array, 5, speak_c);
	std::cout << "\nusing char string\n" << std::endl;
	::iter(char_str_array, 3, speak_char_str);
	std::cout << "\nusing std::string string\n" << std::endl;
	::iter(str_array, 3, speak_str);
	std::cout << "\nmanipulating array, int" << std::endl;
	::iter(int_array, 10, manipulate_int);
	::iter(int_array, 10, speak_i);
	std::cout << "\nusing function tremplate\n" << std::endl;
	::iter(int_array, 10, ::speak_manipulate_int<int>);
	std::cout << "\nusing const input\n" << std::endl;
	::iter(const_char_str_array, 3, speak_const_char_str);
}