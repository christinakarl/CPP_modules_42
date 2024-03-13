/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:12:41 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/11 19:13:10 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array(void)
{
	std::cout << "Array class default constructor called" << std::endl;
}

Array::Array(const Array &c)
{
	std::cout << "Array class copy constructor called" << std::endl;
	if (this != &c)
	{

	}
}

Array &Array::operator=(const Array &c)
{
	std::cout << "Array class copy assignment operator called" << std::endl;
	if (this != &c)
	{

	}
	return *this;
}

Array::~Array()
{
	std::cout << "Array destructor called" << std::endl;
}

