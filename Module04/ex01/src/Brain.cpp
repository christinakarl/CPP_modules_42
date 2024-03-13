/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:51:53 by ckarl             #+#    #+#             */
/*   Updated: 2024/02/29 14:21:28 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain(void) : _index(0)
{
	std::cout << "Brain class default constructor called" << std::endl;
}

Brain::Brain(std::string idea) : _index(0)
{
	this->_ideas[this->_index] = idea;
	this->_index++;
	std::cout << "Brain class string constructor called" << std::endl;
}

Brain::Brain(const Brain &c)
{
	if (this != &c)
	{
		for (size_t i = 0; i <= c._index; i++)
			this->_ideas[i] = c._ideas[i];
		this->_index = c._index;
	}
	std::cout << "Brain class copy constructor called" << std::endl;

}

Brain &Brain::operator=(const Brain &c)
{
	if (this != &c)
	{
		for (size_t i = 0; i < c._index; i++)
			this->_ideas[i] = c._ideas[i];
		this->_index = c._index;
	}
	std::cout << "Brain class copy assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::fillBrain(std::string& idea)
{
	if (this->_index < 100 || !idea.empty())
	{
		this->_ideas[this->_index] = idea;
		this->_index++;
		std::cout << "A new idea has been added to this brain. Index now: " << this->_index << std::endl;
	}
	else
		std::cout << "The idea could not be added to this brain. Index is: " << this->_index << std::endl;
}

std::string	Brain::getIdea(unsigned int i)
{
	if (i >= this->_index)
		return "No idea has been added to this index yet\n";
	else
		return this->_ideas[i];
}

unsigned int	Brain::getIndex(void)
{
	return this->_index;
}
