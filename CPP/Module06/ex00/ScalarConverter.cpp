/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:35:45 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/19 16:51:39 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter class default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(std::string name)
{
	(void) name;
	std::cout << "ScalarConverter class string constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &c)
{
	std::cout << "ScalarConverter class copy constructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &c)
{
	std::cout << "ScalarConverter class copy assignment operator called" << std::endl;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter	ScalarConverter::createConverter(void)
{
	return ScalarConverter();
}

void	ScalarConverter::convertType(std::string str)
{
	// std::cout << "char: " << std::stoi(str) << std::endl;
	std::cout << "int: " << std::stoi(str) << std::endl;
	std::cout << "float: " << std::stof(str) << std::endl;
	std::cout << "double: " << std::stod(str) << std::endl;
}

