/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:55:52 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/12 16:42:41 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	INFO_MSG("'ClapTrap' class default constructor called");
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	INFO_MSG("'ClapTrap' class string constructor called");
}

ClapTrap::ClapTrap( const ClapTrap &c)
{
	INFO_MSG("'ClapTrap' class copy constructor called");
	if (this != &c)
	{
		this->_name = c._name;
		this->_hitPoints = c._hitPoints;
		this->_energyPoints = c._energyPoints;
		this->_attackDamage = c._attackDamage;
	}
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &c)
{
	INFO_MSG("'ClapTrap' class copy assignment operator called");
	if (this != &c)
	{
		this->_name = c._name;
		this->_hitPoints = c._hitPoints;
		this->_energyPoints = c._energyPoints;
		this->_attackDamage = c._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap( void )
{
	INFO_MSG("'ClapTrap' class destructor called");
}

void	ClapTrap::attack(const std::string& target)
{
	//attacks target and takes damage * amount, costs 1 energy
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " + this->_name + " attacks " + target + ", causing " \
			<< this->_attackDamage << " damage "<< std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " + this->_name + " cannot attack, hitpoints: " << this->_hitPoints \
			<< ", energypoints: " << this->_energyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "ClapTrap " + this->_name + " has taken damage, hitpoints: " << this->_hitPoints \
		<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	//costs 1 energy, gives <amount> hitpoint
	if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " + this->_name + " has repaired itself, hitpoints: " << this->_hitPoints \
			<< ", energypoints: " << this->_energyPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " + this->_name + " cannot repair itself, energypoints: " \
			<< this->_energyPoints << std::endl;

}
