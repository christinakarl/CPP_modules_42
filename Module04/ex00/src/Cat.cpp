/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:17:50 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 21:39:06 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat class default constructor called" << std::endl;
}

Cat::Cat(std::string name) : Animal(name)
{
	this->_type = "Cat";
	std::cout << "Cat class string constructor called" << std::endl;
}

Cat::Cat(const Cat &c)
{
	std::cout << "Cat class copy constructor called" << std::endl;
	if (this != &c)
	{
		this->_type = c._type;
	}
}

Cat &Cat::operator=(const Cat &c)
{
	std::cout << "Cat class copy assignment operator called" << std::endl;
	if (this != &c)
	{
		this->_type = c._type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "miaouuuuuu" << std::endl;
}
