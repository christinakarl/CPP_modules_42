/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:08:33 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 18:17:07 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "'DiamondTrap' class default constructor called" << std::endl;
	ClapTrap::_name = "default_clap_name";
	this->_name = "default";
	this->_hitPoints = FragTrap::_hit;
	this->_attackDamage = FragTrap::_damage;
	this->_energyPoints = ScavTrap::_energyPoints;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "'DiamondTrap' class string constructor called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = FragTrap::_hit;
	this->_attackDamage = FragTrap::_damage;
	this->_energyPoints = ScavTrap::_energyPoints;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " + this->_name + " destructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &d )
{
	std::cout << "'DiamondTrap' class copy constructor called" << std::endl;
	if (this != &d)
	{
		this->_name = d._name;
		ClapTrap::_name = d._name + "_clap_name";
		this->_hitPoints = d._hitPoints;
		this->_attackDamage = d._attackDamage;
		this->_energyPoints = d._energyPoints;
	}
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &d )
{
	std::cout << "'DiamondTrap' class copy assignment operator called" << std::endl;
	if (this != &d)
	{
		this->_name = d._name;
		ClapTrap::_name = d._name + "_clap_name";
		this->_hitPoints = d._hitPoints;
		this->_attackDamage = d._attackDamage;
		this->_energyPoints = d._energyPoints;
	}
	return *this;
}

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "My name is: " << this->_name << " and my claptrap name is: " << ClapTrap::_name << std::endl;
	// std::cout << "Energy points: " << this->_energyPoints <<std::endl;
	// std::cout << "Hit points: " << this->_hitPoints <<std::endl;
	// std::cout << "Damage points: " << this->_attackDamage <<std::endl;
}
