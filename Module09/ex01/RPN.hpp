/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:37:46 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/21 17:27:41 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <stack>

class RPN
{
public:
	RPN();
	RPN(std::string input);
	RPN(const RPN &c);
	RPN &operator=(const RPN &c);
	~RPN();

	void	calculate(char &op);

	class calculationError : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};
	class invalidChar : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

private:
	std::stack<int>	_digits;

};

#endif

