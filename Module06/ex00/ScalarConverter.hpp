/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:35:49 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/27 11:32:16 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <exception>
#include <ostream>
#include <cstdlib>
#include <locale>
#include <sstream>
#include <limits>

class ScalarConverter
{
public:
	~ScalarConverter(void);
	static void	convertType(std::string str);

	class InvalidInput : public std::exception
	{
	public:
		virtual const char *what(void) const throw();
	};

	class OutOfRange : public std::exception
	{
	public:
		virtual const char *what(void) const throw();
	};

private:
	ScalarConverter(void);
	ScalarConverter(const ScalarConverter &c);
	ScalarConverter &operator = (const ScalarConverter &c);




};

#endif

