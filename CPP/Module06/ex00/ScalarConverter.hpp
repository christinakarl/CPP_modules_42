/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:35:49 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/19 17:05:03 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

#include <iostream>
#include <string>

class ScalarConverter
{
public:
	static ScalarConverter	createConverter(void);
	static void	convertType(std::string str);

	~ScalarConverter(void);

private:
	ScalarConverter(void);
	ScalarConverter(std::string name);
	ScalarConverter(const ScalarConverter &c);
	ScalarConverter &operator=(const ScalarConverter &c);
};

#endif

