/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:42:09 by ckarl             #+#    #+#             */
/*   Updated: 2023/11/23 16:04:09 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

Phonebook::Phonebook( void ) {

	this->index = 0;
	this->total = 0;
	return ;
}

Phonebook::~Phonebook( void ) {

	return ;
}

void	Phonebook::addCtc( Contact ctc )
{
	if (this->index > 7)
	{
		this->index = 0;
	}
	this->_Book[this->index] = ctc;
	this->_Book[this->index].index = index;
	std::cout << "\033[1;35m\nThis contact was successfully added under index ";
	std::cout << this->index;
	std::cout << "\033[0m\n\n";
	if (this->total < 8)
		this->total++;
	if (this->index <= 7)
		this->index++;
}

int	Phonebook::getctc_info( int ctc_index )
{
	if (ctc_index < 0 || ctc_index > 7)
	{
		std::cout << "\033[0;35mThis index is out of range or invalid\033[0m\n";
		return 1;
	}
	else if (this->total > ctc_index)
		this->_Book[ctc_index].display_ctc_long();
	else
	{
		std::cout << "\n\033[0;35mThis index does not exist yet\033[0m\n";
		return 1;
	}
	return 0;
}

int	Phonebook::display_book( void )
{
	int	i;

	if (this->total == 0)
	{
		std::cout << "\n\033[0;35mYour phonebook is still empty, add contacts first\033[0m\n\n";
		return 1;
	}
	std::cout << "\n\033[1;35mBelow you may find a list of your contacts\033[0m\n\n";
	for (i = 0; i < this->total; i++)
	{
		this->_Book[i].display_ctc_short();
	}
	return 0;
}
