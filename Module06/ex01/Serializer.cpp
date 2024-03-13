/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:35:55 by ckarl             #+#    #+#             */
/*   Updated: 2024/02/03 15:29:41 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout << "Serializer class default constructor called" << std::endl;
}

Serializer::Serializer(std::string name)
{
	(void) name;
	std::cout << "Serializer class string constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &c)
{
	std::cout << "Serializer class copy constructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &c)
{
	std::cout << "Serializer class copy assignment operator called" << std::endl;
	return *this;
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
}

//It takes a pointer and converts it to the unsigned integer type uintptr_t.
uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t i = reinterpret_cast<uintptr_t>(ptr);
	return i;
}

//It takes an unsigned integer parameter and converts it to a pointer to Data.
Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
