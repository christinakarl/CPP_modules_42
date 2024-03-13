/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:18:54 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/01 12:05:55 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	this->_dogBrain = new Brain();
	std::cout << "Dog class default constructor called" << std::endl;
}

Dog::Dog(std::string name) : Animal(name)
{
	this->_type = "Dog";
	this->_dogBrain = new Brain();
	std::cout << "Dog class string constructor called" << std::endl;
}

Dog::Dog(const Dog &c) : Animal(c)
{
	std::cout << "Dog class copy constructor called" << std::endl;

	this->_type = c._type;
	this->_dogBrain = new Brain(*(c._dogBrain));
}

Dog &Dog::operator=(const Dog &c)
{
	std::cout << "Dog class copy assignment operator called" << std::endl;
	if (this != &c)
	{
		this->_type = c._type;
		if (this->_dogBrain)
			delete this->_dogBrain;
		this->_dogBrain = new Brain(*(c._dogBrain));
	}
	return *this;
}

Dog::~Dog()
{
	delete this->_dogBrain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "woof woof" << std::endl;
}

void	Dog::setIdea(std::string& idea)
{
	this->_dogBrain->fillBrain(idea);
}

std::string		Dog::getIdea(unsigned int i)
{
	return this->_dogBrain->getIdea(i);
}
