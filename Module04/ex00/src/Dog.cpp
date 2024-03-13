/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:18:54 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 21:41:36 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog class default constructor called" << std::endl;
}

Dog::Dog(std::string name) : Animal(name)
{
	this->_type = "Dog";
	std::cout << "Dog class string constructor called" << std::endl;
}

Dog::Dog(const Dog &c)
{
	std::cout << "Dog class copy constructor called" << std::endl;
	if (this != &c)
	{
		this->_type = c._type;
	}
}

Dog &Dog::operator=(const Dog &c)
{
	std::cout << "Dog class copy assignment operator called" << std::endl;
	if (this != &c)
	{
		this->_type = c._type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "woof woof" << std::endl;
}
