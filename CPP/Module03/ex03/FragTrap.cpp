/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:04:24 by ckarl             #+#    #+#             */
/*   Updated: 2024/02/21 11:20:41 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap(), _hit(100), _energy(100), _damage(30)
{
	std::cout << "'FragTrap' class default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	this->_energyPoints = 100;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name), _hit(100), _energy(100), _damage(30)
{
	std::cout << "'FragTrap' class string constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	this->_energyPoints = 100;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " + this->_name + " destructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &f ) : ClapTrap(f)
{
	std::cout << "'FragTrap' class copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &f )
{
	std::cout << "'FragTrap' class copy assignment operator called" << std::endl;
	if (this != &f)
	{
		this->_name = f._name;
		this->_hitPoints = f._hitPoints;
		this->_attackDamage = f._attackDamage;
		this->_energyPoints = f._energyPoints;
	}
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "Everybody high five!" << std::endl;
}
