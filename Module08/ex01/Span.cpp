/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:56:24 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/19 15:32:11 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _max(0) {}

Span::Span(unsigned int m) : _max(m) {}

Span::Span(const Span &c): _max(c._max) {}

Span &Span::operator=(const Span &c)
{
	if (this != &c) {
		_max = c._max;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (_vec.size() < _max) {
		_vec.push_back(n);
	}
	else
		throw Span::SpanIsFull();
}

//create copy vector for all distances and then choose min_element of it
int Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw Span::NoSpan();
	std::vector<int> dist;
	sort(_vec.begin(), _vec.end());
	for (std::vector<int>::iterator it = _vec.begin(); it != (_vec.end() - 1); it++)
	{
		std::vector<int>::iterator temp = it + 1;
		int single_dist = *temp - *it;
		dist.push_back(single_dist);
	}
	return *min_element(dist.begin(), dist.end());
}

int Span::longestSpan()
{
	if (_vec.size() <= 1)
		throw Span::NoSpan();
	return (*max_element(_vec.begin(), _vec.end()) - *min_element(_vec.begin(), _vec.end()));
}

const char *Span::SpanIsFull::what(void) const throw() { return "This class is full, it cannot take any more numbers"; }

const char *Span::NoSpan::what(void) const throw() { return "There are not enough numbers, no span can be calculated"; }

const char *Span::TooBig::what(void) const throw() { return "This range cannot be added, it is too big for this class"; }