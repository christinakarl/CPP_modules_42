/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:56:20 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/19 15:32:47 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
# define Span_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span
{
public:
	Span();
	Span(unsigned int m);
	Span(const Span &c);
	Span &operator=(const Span &c);
	~Span();

	int shortestSpan();
	int longestSpan();
	void addNumber(int n);
	template <typename T> void addRange(T first, int size)
	{
		int	min = std::min(size, static_cast<int>(_max - _vec.size()));
		_vec.insert(_vec.end(), first, first + min);
		if (min < size)
			throw Span::SpanIsFull();
		for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); it++) {
			std::cout << *it << std::endl;
		}
	}

	class SpanIsFull : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

	class NoSpan : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

	class TooBig : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

private:
	unsigned int	_max;
	std::vector<int>	_vec;

};

#endif

