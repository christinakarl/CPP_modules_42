/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:55:52 by ckarl             #+#    #+#             */
/*   Updated: 2024/02/21 11:01:18 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "'ClapTrap' class default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "'ClapTrap' class string constructor called" << std::endl;
	if (this->_name.empty())
		this->_name = "no name";
}

ClapTrap::ClapTrap( const ClapTrap &c)
{
	std::cout << "'ClapTrap' class copy constructor called" << std::endl;
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
	std::cout << "'ClapTrap' class copy assignment operator called" << std::endl;
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
	// INFO_MSG("'ClapTrap' class destructor called");
	std::cout << "ClapTrap " + this->_name + " destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	//attacks target and takes damage * amount, costs 1 energy
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << this->_name + " attacks " + target + ", causing " \
			<< this->_attackDamage << " damage "<< std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << this->_name + " cannot attack, hitpoints: " << this->_hitPoints \
			<< ", energypoints: " << this->_energyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << this->_name + " has taken damage, hitpoints: " << this->_hitPoints \
		<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	//costs 1 energy, gives <amount> hitpoint
	if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << this->_name + " has repaired itself, hitpoints: " << this->_hitPoints \
			<< ", energypoints: " << this->_energyPoints << std::endl;
	}
	else
		std::cout << this->_name + " cannot repair itself, energypoints: " \
			<< this->_energyPoints << std::endl;

}
