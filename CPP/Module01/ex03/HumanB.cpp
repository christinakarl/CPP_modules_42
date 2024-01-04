/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:32:14 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/04 18:56:18 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string newname )
{
	this->_name = newname;
	this->_weapon = nullptr;
	std::cout << "HumanB has been created with name: " + this->_name << std::endl;
	return ;
}

HumanB::HumanB( void )
{
	this->_name = "";
	std::cout << "HumanB has been created with no name" << std::endl;
	return ;
}

HumanB::~HumanB( void )
{
	std::cout << this->_name + " has been destroyed"<< std::endl;
	return ;
}

void	HumanB::attack( void )
{
	if (this->_weapon != nullptr)
		std::cout << this->_name + " attacks with their " + _weapon->getType() << std::endl;
	else
		std::cout << this->_name + " cannot attack without a weapon" << std::endl;
}

void	HumanB::setWeapon( Weapon newWeapon)
{
	this->_weapon = &newWeapon ;
	std::cout << this->_name + " now holds weapon: " << this->_weapon->getType() << std::endl;
}
