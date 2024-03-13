/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:12:29 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/12 16:22:26 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _array_HPP
# define _array_HPP

#include <iostream>
#include <string>
#include <exception>

template <class T>
class Array
{
public:
	Array() : _array(new T()), _size(0) {};
	Array(unsigned int n) : _array(new T[n]), _size(n) {};
	~Array() { delete []_array; };
	Array(const Array &c) { *this = c; };
	Array &operator=(const Array &c) {
		if (this != &c)
		{
			if (_size) delete []_array;
			else if (_array) delete _array;
			_array = new T[c._size];
			for (unsigned int i = 0; i < c._size; ++i) {
				_array[i] = c._array[i];
			}
			_size = c._size;
		}
		return *this;
	};

	T	&operator [] (unsigned int n) const{
		if (n >= _size)
			throw std::invalid_argument("This index is out of bound");
		return _array[n];
	};

	unsigned int	size() const { return _size; };

private:
	T				*_array;
	unsigned int	_size;

};

#endif

