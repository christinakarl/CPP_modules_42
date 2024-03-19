/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:56:20 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/19 12:20:47 by ckarl            ###   ########.fr       */
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

	void addNumber(int n);
	void addArrayRange(int *arr, unsigned int size);
	void addVectorRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();

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
	unsigned int	_total;
	std::vector<int>	_vec;


};

#endif

