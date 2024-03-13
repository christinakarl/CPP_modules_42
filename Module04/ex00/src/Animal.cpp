/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:45:17 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 21:38:50 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(void) : _type("default")
{
	std::cout << "Animal class default constructor called" << std::endl;
}

Animal::Animal(std::string name) : _type(name)
{
	std::cout << "Animal class string constructor called" << std::endl;
}

Animal::Animal(const Animal &c)
{
	std::cout << "Animal class copy constructor called" << std::endl;
	if (this != &c)
	{
		this->_type = c._type;
	}
}

Animal &Animal::operator=(const Animal &c)
{
	std::cout << "Animal class copy assignment operator called" << std::endl;
	if (this != &c)
	{
		this->_type = c._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "hahahahah" << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}
