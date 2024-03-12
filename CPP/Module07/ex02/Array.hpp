/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:12:29 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/12 16:00:41 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
# define Array_HPP

#include <iostream>
#include <string>
#include <exception>

template <class T>
class Array
{
public:
	Array() { array = new T(); arraySize = 0; };
	Array(unsigned int n) { array = new T[n]; arraySize = n; };
	~Array()
	{
		if (arraySize) delete []array;
		else delete array;
	};
	Array(const Array &c) { *this = c; };
	Array &operator=(const Array &c) {
		if (this != &c)
		{
			if (arraySize) delete []array;
			else if (array) delete array;
			array = new T[c.arraySize];
			for (unsigned int i = 0; i < c.arraySize; ++i) {
				array[i] = c.array[i];
			}
			arraySize = c.arraySize;
		}
		return *this;
	};

	T	&getElement(unsigned int n) const{
		if (n >= arraySize)
			throw std::invalid_argument("This index is out of bound");
		return array[n];
	};

	unsigned int	size() const { return arraySize; };

private:
	T				*array;
	unsigned int	arraySize;

};

#endif

