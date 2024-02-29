/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:17:50 by ckarl             #+#    #+#             */
/*   Updated: 2024/02/29 15:37:00 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat class default constructor called" << std::endl;
	this->_type = "Cat";
	this->_catBrain = new Brain();
}

Cat::Cat(std::string name) : Animal(name)
{
	this->_type = "Cat";
	this->_catBrain = new Brain();
	std::cout << "Cat class string constructor called" << std::endl;
}

Cat::Cat(const Cat &c) : Animal(c)
{
	std::cout << "Cat class copy constructor called" << std::endl;
	if (this != &c)
	{
		this->_type = c._type;
		this->_catBrain = new Brain(*(c._catBrain));
	}
}

Cat &Cat::operator=(const Cat &c)
{
	std::cout << "Cat class copy assignment operator called" << std::endl;
	if (this != &c)
	{
		// Animal::operator=(c);
		this->_type = c._type;
		if (this->_catBrain)
			delete this->_catBrain;
		this->_catBrain = new Brain(*(c._catBrain));
	}
	return *this;
}

Cat::~Cat()
{
	delete this->_catBrain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "miaouuuuuu" << std::endl;
}

void	Cat::setIdea(std::string idea)
{
	this->_catBrain->fillBrain(idea);
}

std::string	Cat::getIdea(unsigned int i)
{
	return this->_catBrain->getIdea(i);
}
