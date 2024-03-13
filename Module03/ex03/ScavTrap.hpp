/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:50:13 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 15:13:39 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( std::string name );
	~ScavTrap( void );
	ScavTrap( const ScavTrap &s );
	ScavTrap &operator=( const ScavTrap &s );

	void	attack(const std::string& target);
	void	guardGate( void );

protected:
	bool	_gate;
};

#endif
