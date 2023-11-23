/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:40:08 by ckarl             #+#    #+#             */
/*   Updated: 2023/11/23 12:17:48 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

Contact::Contact( void )
{
	//std::cout << "constructing Contact" << std::endl;
	return ;
}

Contact::~Contact( void ) {

	//std::cout << "destructing Contact" << std::endl;
	return ;
}

void	Contact::assignValue( std::string value, int d )
{
	if (d < 0 || d > 4 || value.empty())
		return ;
	if (d == 0)
		this->_0FirstName = value;
	if (d == 1)
		this->_1LastName = value;
	if (d == 2)
		this->_2NickName = value;
	if (d == 3)
		this->_3PhoneNumber = value;
	if (d == 4)
		this->_4DarkestSecret = value;
}

std::string	Contact::getValue( int d )
{
	std::string	value;

	if (d < 0 || d > 4)
		return (NULL);
	if (d == 0)
		value = this->_0FirstName;
	if (d == 1)
		value = this->_1LastName;
	if (d == 2)
		value = this->_2NickName;
	if (d == 3)
		value = this->_3PhoneNumber;
	if (d == 4)
		value = this->_4DarkestSecret;
	return (value);
}

void	Contact::display_ctc_short( void )
{

	std::cout << std::setw(10) << this->index << "|";
	if (this->_0FirstName.size() > 9)
		std::cout << std::setw(10) << this->_0FirstName.substr(0,9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_0FirstName + "|";
	if (this->_1LastName.size() > 9)
		std::cout << std::setw(10) << this->_1LastName.substr(0,9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_1LastName << "|";
	if (this->_2NickName.size() > 9)
		std::cout << std::setw(10) << this->_2NickName.substr(0,9) + "." << "|\n";
	else
		std::cout << std::setw(10) << this->_2NickName << "|\n";
}

void	Contact::display_ctc_long( void )				//this doesn't work yet
{
	// std::cout << "in the display long func" << std::endl;
	std::cout << "\033[2;35mFirst name: " << this->_0FirstName << std::endl;
	std::cout << "Last name: " << this->_1LastName << std::endl;
	std::cout << "Nickname: " << this->_2NickName << std::endl;
	std::cout << "Phone number: " << this->_3PhoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_4DarkestSecret + "\033[0m\n\n";
}
