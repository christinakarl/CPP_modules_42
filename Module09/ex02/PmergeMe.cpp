/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:35:31 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/25 11:16:49 by ckarl            ###   ########.fr       */
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
		_vec = c._vec;
		_deq_time = c._deq_time;
		_vec_time = c._vec_time;
		_unsorted = c._unsorted;
	}
	return *this;
}

bool	PmergeMe::valid_input(const std::string &arg)
{
	std::istringstream	ss(arg);
	char c;

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
	_vec.push_back(n);
}


void	PmergeMe::sort_all()
{
	struct timeval begin, end;

	_unsorted = _vec;
	gettimeofday(&begin, NULL);
	// std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();
	if (_deq.empty())
		throw emptyContainer();
	_deq = merge_sort_deq(_deq);
	// std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();
	gettimeofday(&end, NULL);
	_deq_time = (end.tv_sec - begin.tv_sec) * 1000 + (end.tv_usec - begin.tv_usec);
	// std::chrono::duration<double> elapsed_seconds_deq = end_time - start_time;
	// std::cout << "_deq_time: " << _deq_time << " us" << std::endl;

	gettimeofday(&begin, NULL);
	// std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();
	if (_vec.empty())
		throw emptyContainer();
	_vec = merge_sort_vec(_vec);
	// std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();
	gettimeofday(&end, NULL);
	_vec_time = (end.tv_sec - begin.tv_sec) * 1000 + (end.tv_usec - begin.tv_usec);
	// std::chrono::duration<double> elapsed_seconds_deq = end_time - start_time;
	// std::cout << "_deq_time: " << _vec_time << " us" << std::endl;
	displayAll();
}

std::deque<int>	PmergeMe::merge_sort_deq(std::deque<int> &d)
{
	if (d.size() <= 1)
		return d;
	size_t middle = d.size() / 2;
	std::deque<int> left(d.begin(), (d.begin() + middle));
	std::deque<int> right((d.begin() + middle), d.end());

	left = merge_sort_deq(left);
	right = merge_sort_deq(right);

	std::deque<int> result;
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(result));
	return result;
}

std::vector<int>	PmergeMe::merge_sort_vec(std::vector<int> &l)
{
	if (l.size() <= 1)
		return l;
	size_t middle = l.size() / 2;
	std::vector<int> left(l.begin(), (l.begin() + middle));
	std::vector<int> right((l.begin() + middle), l.end());

	left = merge_sort_vec(left);
	right = merge_sort_vec(right);

	std::vector<int> result;
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(result));
	return result;
}

void	PmergeMe::displayAll()
{
	int i = 0;

	std::cout << "Before: ";
	for (std::vector<int>::iterator it = _unsorted.begin(); it != _unsorted.end(); it++, i++) {
		std::cout << *it << " ";
		if (i == 3) {
			std::cout << "[...]"; break;
		}
	}
	std::cout << std::endl;
	i = 0;
	std::cout << "After:  ";
	for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); it++, i++) {
		std::cout << *it << " ";
		if (i == 3) {
			std::cout << "[...]"; break;
		}
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector<int>: " << _vec_time << " us" << std::endl;
	std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque<int>: " << _deq_time << " us" << std::endl;
}


const char	*PmergeMe::invalidInput::what(void) const throw() { return "The argument list contains invalid input"; }
const char	*PmergeMe::emptyContainer::what(void) const throw() { return "Cannot merge sort an empty container"; }


std::ostream	&operator << (std::ostream &os, const PmergeMe &obj)
{
	(void)obj;

	return os;
}