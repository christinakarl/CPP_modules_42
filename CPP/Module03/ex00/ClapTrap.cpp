/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:55:52 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/11 15:14:58 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
}

ClapTrap::ClapTrap( const ClapTrap &c)
{
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &c)
{
}

ClapTrap::~ClapTrap( void )
{
}

void	ClapTrap::attack(const std::string& target);
void	ClapTrap::takeDamage(unsigned int amount);
void	ClapTrap::beRepaired(unsigned int amount);