/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:35:27 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/22 18:36:48 by ckarl            ###   ########.fr       */
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
	std::deque<int>		merge_sort_deq(std::deque<int> _deq);
	void	sort_lst();
	//sort deque
	//sort list
	class invalidInput : public std::exception
	{
		public:
			virtual const char	*what(void) const throw();
	};

private:
	std::deque<int>	_deq;
	std::deque<int>	_deq_sorted;
	double			_deq_time;
	std::list<int>	_lst;
	std::list<int>	_lst_sorted;
	double			_lst_time;


};

std::ostream	&operator << (std::ostream &os, const PmergeMe &obj);

#endif

