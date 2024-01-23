/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:35:45 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/23 18:02:23 by ckarl            ###   ########.fr       */
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

void	displayAll(int i, float f, double d)
{
	std::cout << "int: " << i << std::endl;
	std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

//convert functions
void	convertFromChar(char c)
{
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "char: ";
	if (!isascii(c))
		std::cout << "Impossible" << std::endl;
	else if (c < 33 || c > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << c << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	convertFromInt(std::string str)
{
	int i = std::stoi(str);
	std::cout << "int: " << std::stoi(str) << std::endl;
	std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "float: " << i << ".0f" << std::endl;
	std::cout << "double: " << i << ".0" <<std::endl;
}

void	convertFromFloat(std::string str)
{
	if (str.compare("-inff") == 0)
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
	else if (str.compare("+inff") == 0)
		std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
	else if (str.compare("nanf") == 0)
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
}

void	convertFromDouble(std::string str)
{
	if (str.compare("-inf") == 0)
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
	else if (str.compare("+inf") == 0)
		std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
	else if (str.compare("nan") == 0)
		std::cout << "char: impossible\nint: impossible\nfloat: nanff\ndouble: nan" << std::endl;

}

//exceptions
const char	*ScalarConverter::InvalidInput::what(void) const throw()
{
	return "Invalid input";
}

bool	testSpecialCases(std::string str)
{
	std::string	exc[6] = {"+inf", "-inf", "nan", "+inff", "-inff", "nanf"};
	for (int i = 0; i < 6; i++)
	{
		if (exc[i].compare(str) == 0 && i < 3) {
			convertFromDouble(str);
			return true;
		}
		else if (exc[i].compare(str) == 0 && i > 2) {
			convertFromFloat(str);
			return true;
		}
	}
	return false;
}

void	ScalarConverter::convertType(std::string str)
{
	//send to parsing & throw errors if necessary
	if (str.length() <= 0)
		throw InvalidInput();

	char	*s = const_cast <char *>(str.c_str());
	int	onlyDigits = 0, sign = 0, point = 0, floatF = 0;

	if (!testSpecialCases(str)) {
		for (int i = 0; i < str.length(); i++)
		{
			if (!isdigit(s[i]) && str.length() > 1) {
				if (s[i] == '-' || s[i] == '+')
				{
					if (sign > 0)
						throw InvalidInput();
					sign++;
				}
				else if (s[i] == '.')
				{
					if (point > 0)
						throw InvalidInput();
					point++;
				}
				else if (s[i] == 'f')
				{
					if (floatF > 0)
						throw InvalidInput();
					floatF++;
				}
				else
					throw InvalidInput();
			}
		}
		if (str.length() == 1 && !isdigit(s[0]))
			convertFromChar(s[0]);
		else if (point && floatF)
			std::cout << "it's a float" << std::endl;
		else if (point && !floatF)
			std::cout << "it's a double" << std::endl;
		else
			convertFromInt(str);
	}
}

