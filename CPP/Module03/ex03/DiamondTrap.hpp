/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:08:47 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 15:44:49 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap( void );
	DiamondTrap( std::string name );
	~DiamondTrap( void );
	DiamondTrap( const DiamondTrap &d );
	DiamondTrap &operator=( const DiamondTrap &f );

	void	whoAmI( void );
	void	attack( const std::string& target );

protected:
	std::string	_name;
};



#endif