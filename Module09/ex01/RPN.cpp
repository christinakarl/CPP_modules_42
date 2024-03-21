/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:37:50 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/21 17:41:15 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN(){}

RPN::RPN(const RPN &c) : _digits(c._digits) {}

RPN &RPN::operator=(const RPN &c)
{
	if (this != &c)
	{
		_digits = c._digits;
	}
	return *this;
}

void	RPN::calculate(char &op)
{
	(void) op;
	if (_digits.size() < 2)
		throw RPN::calculationError();
	int	a = _digits.top();
	_digits.pop();
	int	b = _digits.top();
	_digits.pop();
	int result = 0;
	if (op == '+')
		result = b + a;
	else if (op == '-')
		result = b - a;
	else if (op == '*')
		result = b * a;
	else if (op == '/')
		result = b / a;
	_digits.push(result);
}


RPN::RPN(std::string input)
{
	std::istringstream	ss(input);
	char c;

	while (ss >> c) {
		if ((c < '0' || c > '9') && (c != '+' && c != '-' && c != '/' && c != '*'))
			throw RPN::invalidChar();
		if (c >= '0' && c <= '9')
			_digits.push(c - 48);
		if (c == '+' || c == '-' || c == '/' || c == '*')
			calculate(c);
	}
	if (_digits.size() != 1)
		throw RPN::calculationError();
	std::cout << _digits.top() << std::endl;
}

const char *RPN::invalidChar::what(void) const throw() { return "Non-digit and non-operator character found";}
const char *RPN::calculationError::what(void) const throw() { return "Too many operators for operands";}
