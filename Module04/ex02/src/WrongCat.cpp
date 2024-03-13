/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:43:55 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 21:48:35 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->_type = "Cat";
	std::cout << "WrongCat class default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
	this->_type = name;
	std::cout << "WrongCat class string constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)
{
	std::cout << "WrongCat class copy constructor called" << std::endl;
	if (this != &c)
	{
		this->_type = c._type;
	}
}

WrongCat &WrongCat::operator=(const WrongCat &c)
{
	std::cout << "WrongCat class copy assignment operator called" << std::endl;
	if (this != &c)
	{
		this->_type = c._type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "why am I talking I am a cat I can't talk" << std::endl;
}
