/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:56:24 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/19 12:57:00 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _max(0), _total(0) {}

Span::Span(unsigned int m) : _max(m), _total(0) {}

Span::Span(const Span &c): _max(c._max), _total(c._total) {}

Span &Span::operator=(const Span &c)
{
	if (this != &c) {
		_max = c._max;
		_total = c._total;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (_total < _max) {
		_vec.push_back(n);
		_total++;
	}
	else
		throw Span::SpanIsFull();
}

void Span::addArrayRange(int *arr, unsigned int size)
{
	if (size > _max)
		throw Span::TooBig();
	if (_vec.empty()) {
		std::vector<int>	temp(arr, arr + size);
		_vec = temp;
		_total = size;
		std::cout << "in empty array range" << std::endl;
	}
	else {
		for (unsigned int i = 0; i < size; i++) {
			addNumber(arr[i]);
			std::cout << arr[i] << std::endl;
		}
	}
	for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); it++) {
	std::cout << *it << std::endl;
	}
}

//create also a add an existing vector function
void Span::addVectorRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_vec.empty()) {
		std::vector<int>	temp(begin, end);
		_vec = temp;
		_total = temp.size();
		std::cout << "in empty vector range" << std::endl;
	}
	else {
		for (std::vector<int>::iterator it = begin; it != end; it++) {
			addNumber(*it);
		}
	}
	for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); it++) {
	std::cout << *it << std::endl;
	}
}

//create copy vector for all distances and then choose min_element of it
int Span::shortestSpan()
{
	if (!(_total) || _total == 1)
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
	if (!(_total) || _total == 1)
		throw Span::NoSpan();
	return (*max_element(_vec.begin(), _vec.end()) - *min_element(_vec.begin(), _vec.end()));
}

const char *Span::SpanIsFull::what(void) const throw() { return "This class is full, it cannot take any more numbers"; }

const char *Span::NoSpan::what(void) const throw() { return "There are not enough numbers, no span can be calculated"; }

const char *Span::TooBig::what(void) const throw() { return "This range cannot be added, it is too big for this class"; }