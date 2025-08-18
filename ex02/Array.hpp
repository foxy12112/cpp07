/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:40:00 by ldick             #+#    #+#             */
/*   Updated: 2025/08/18 14:03:14 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <exception>

template<class T>
class Array
{
	public:
		Array(){
			std::cout << "Array: Default constructor called" << std::endl;
			this->array = new T;
		}
		Array(unsigned int size){
			std::cout << "Array: sized constructor called" << std::endl;
			this->array = new T[size];
			this->size = size;
		}
		Array(Array &copy){
			std::cout << "Array: Copy constructor called" << std::endl;
			this->array = new T[copy.size];
			for (unsigned int i = 0; i < copy.size; i++)
				this->array[i] = copy.array[i];
			this->size = copy.size;
		}
		Array& operator =(const Array& copy){
			std::cout << "Array: Assignment operator called" << std::endl;
			if (this != &copy)
			{
				delete[] this->array;
				this->size = copy.size;
				this->array = new T[size];
				for (unsigned int i = 0; i < this->size; i++)
					this->array[i] = copy.array[i];
			}
			return (*this);
		}
		~Array(){
			delete []this->array;
			std::cout << "Array: Default Deconstructor called" << std::endl;
		}
		T &operator [](unsigned int ind){
			if (ind >= this->size)
				throw (OutOfBoundsException());
			return (array[ind]);
		}
		T operator [](unsigned int ind)const{
			if (ind >= this->size)
				throw (OutOfBoundsException());
			return (array[ind]);
		}
		class	OutOfBoundsException : public std::exception{
			public:
				OutOfBoundsException(void){};
				const char *what() const throw() { return ("OutOfBoundsException\nindex is out of bounds"); }
		};
	private:
		T *array;
		unsigned int size;
};

#endif