/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:49:53 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/12 17:57:19 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "'ScavTrap' default constructor called" << std::endl;
	this->_name = "default";
	this->_hitPoints = 100;
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_gate = 0;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "'ScavTrap' class string constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_gate = 0;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " + this->_name + " destructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &s ) : ClapTrap(s)
{
	std::cout << "'ScavTrap' copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &s )
{
	std::cout << "'ScavTrap' copy assignment operator called" << std::endl;
	this->_name = s._name;
	this->_hitPoints = s._hitPoints;
	this->_attackDamage = s._attackDamage;
	this->_energyPoints = s._energyPoints;

	return *this;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " + this->_name + " is now in GateKeeper mode" << std::endl;
	this->_gate = 1;
}


void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " + this->_name + " attacks " + target + ", causing " \
			<< this->_attackDamage << " damage "<< std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ScavTrap " + this->_name + " cannot attack, hitpoints: " << this->_hitPoints \
			<< ", energypoints: " << this->_energyPoints << std::endl;
}
