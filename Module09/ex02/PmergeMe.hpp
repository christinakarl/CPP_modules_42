/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:35:27 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/25 11:03:20 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
# define PmergeMe_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <list>
#include <deque>
#include <vector>
#include <sstream>
#include <sys/time.h>

class PmergeMe
{
public:
	PmergeMe();
	PmergeMe(const PmergeMe &c);
	PmergeMe &operator = (const PmergeMe &c);
	~PmergeMe();

	void	add(const std::string &arg);
	bool	valid_input(const std::string &arg);
	void	sort_all();
	std::deque<int>		merge_sort_deq(std::deque<int> &d);
	std::vector<int>	merge_sort_vec(std::vector<int> & l);
	//sort deque
	//sort list
	class invalidInput : public std::exception
	{
		public:
			virtual const char	*what(void) const throw();
	};
	class emptyContainer : public std::exception
	{
		public:
			virtual const char	*what(void) const throw();
	};

	void	displayAll();

	// std::deque<int>		getDeq();
	// std::vector<int>	getVec();
	// std::vector<int>	getUnsorted();
	// long				getDeqTime();
	// long				getVecTime();

private:
	std::deque<int>		_deq;
	long				_deq_time;
	std::vector<int>	_vec;
	long				_vec_time;
	std::vector<int>	_unsorted;


};

std::ostream	&operator << (std::ostream &os, const PmergeMe &obj);

#endif

