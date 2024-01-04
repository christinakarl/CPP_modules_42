/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:42:57 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/04 18:51:32 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string newname, Weapon &newWeapon ) : _weapon(newWeapon), _name(newname)
{
	std::cout << "HumanA has been created with the name: " +this->_name + " and weapon: " << this->_weapon.getType() << std::endl;
	return ;
}

HumanA::~HumanA( void )
{
	std::cout << this->_name + " has been destroyed"<< std::endl;
	return ;
}

void	HumanA::attack( void )
{
	std::cout << this->_name + " attacks with their " + _weapon.getType() << std::endl;
}