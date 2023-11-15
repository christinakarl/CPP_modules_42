/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:42:09 by ckarl             #+#    #+#             */
/*   Updated: 2023/11/15 23:15:32 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

Phonebook::Phonebook( void ) {

	this->index = 0;
	return ;
}

Phonebook::~Phonebook( void ) {

	return ;
}

void	Phonebook::addCtc( Contact ctc )
{
	this->_Book[this->index] = ctc;
	this->_Book[this->index].index = index;
	std::cout << "\033[1;35m\nThis contact was successfully added under index ";
	std::cout << this->index;
	std::cout << "\033[0m\n\n";
	if (this->index < 7)
		this->index++;
}

void	Phonebook::getctc_info( int ctc_index )
{
	if (ctc_index < 0 || ctc_index > 7)
		return ;
	else if (this->index > ctc_index)
		this->_Book[index].display_ctc_long();
	else
		std::cout << "\n\033[1;35mThis index does not exist yet\033[0m\n\n";
}

int	Phonebook::display_book( void )
{
	int	i;

	if (this->index == 0)
	{
		std::cout << "\n\033[1;35mYour phonebook is still empty, add contacts first\033[0m\n\n";
		return 1;
	}
	std::cout << "\n\033[1;35mBelow you may find a list of your contacts\033[0m\n\n";
	for (i = 0; i < this->index; i++)
	{
		this->_Book[i].display_ctc_short();
	}
	return 0;
}
