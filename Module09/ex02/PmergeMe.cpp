/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:35:31 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/22 18:41:33 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &c) { *this = c; }

PmergeMe &PmergeMe::operator = (const PmergeMe &c)
{
	if (this != &c)
	{
		_deq = c._deq;
		_lst = c._lst;
		_deq_time = c._deq_time;
		_lst_time = c._lst_time;
	}
	return *this;
}

bool	PmergeMe::valid_input(const std::string &arg)
{
	std::istringstream	ss(arg);
	char c;

	ss >> c;
	if (c == '-')
		return false;
	while (ss >> c)
	{
		if (c < '0' || c > '9')
			return false;
	}
	return true;
}

void	PmergeMe::add(const std::string &arg)
{
	std::istringstream	ss(arg);
	double n;

	if (valid_input(arg) == false)
		throw invalidInput();
	ss >> n;
	if (n > INT_MAX)
		throw invalidInput();
	_deq.push_back(n);
	_lst.push_back(n);
}


void	PmergeMe::sort_all()
{
	// struct timeval begin, end;

	// gettimeofday(&begin, 0);
	_deq = merge_sort_deq(_deq);
	// gettimeofday(&end, 0);
	// _deq_time = (end.tv_sec - begin.tv_sec) + (end.tv_usec - begin.tv_sec) * 1e-6;
	// std::cout << "_deq_time: " << _deq_time << " us" << std::endl;
}

std::deque<int>	PmergeMe::merge_sort_deq(std::deque<int> d)
{
	if (d.size() <= 1)
		return d;
	size_t middle = d.size() / 2;
	std::deque<int> left(d.begin(), _deq.begin() + middle);
	
	std::deque<int> right(d.begin() + middle, d.end());

	left = merge_sort_deq(left);
	right = merge_sort_deq(right);

	std::deque<int> result;
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(result));
	return result;
}

void	PmergeMe::sort_lst()
{

}

const char	*PmergeMe::invalidInput::what(void) const throw() { return "The argument list contains invalid input"; }

std::ostream	&operator << (std::ostream &os, const PmergeMe &obj)
{
	//display PmergeMe deq, lst and time
	(void)obj;
	return os;
}