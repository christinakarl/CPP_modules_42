/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:36:18 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/04 17:24:32 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
	this->_type = "";
	std::cout << "A new weapon with no name has been created" << std::endl;
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

Weapon::Weapon( std::string newtype )
{
	this->_type = newtype;
	std::cout << "A new weapon has been created with the name: " << this->_type << std::endl;
}

const std::string	&Weapon::getType( void )
{
	// const std::string&	ref = this->_type;
	return this->_type ;
}

void	Weapon::setType( std::string str )
{
	this->_type = str;
}
