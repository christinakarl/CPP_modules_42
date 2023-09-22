/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:40:08 by ckarl             #+#    #+#             */
/*   Updated: 2023/09/22 18:16:06 by ckarl            ###   ########.fr       */
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
	if (d < 0 || d > 4)
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

std::string		Contact::getValue( int d )
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