/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:43:38 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 21:45:47 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("default")
{
	std::cout << "WrongAnimal class default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : _type(name)
{
	std::cout << "WrongAnimal class string constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &c)
{
	std::cout << "WrongAnimal class copy constructor called" << std::endl;
	if (this != &c)
	{
		this->_type = c._type;
	}
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &c)
{
	std::cout << "WrongAnimal class copy assignment operator called" << std::endl;
	if (this != &c)
	{
		this->_type = c._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "omg it's all wrong" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}
