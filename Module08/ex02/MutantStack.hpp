/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:48:23 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/19 20:09:24 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
# define MutantStack_HPP

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

template <class T>
class MutantStack : public std::stack<T>
{

public:
	MutantStack(void) {};
	MutantStack(const MutantStack &m) { this->c = m.c; };
	MutantStack &operator=(const MutantStack &m) {
		if (*this != m)
			this->c = m.c;
		return *this;
	};
	~MutantStack(void) {};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }

};

#endif
