/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:04:37 by ckarl             #+#    #+#             */
/*   Updated: 2024/02/21 11:35:13 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( std::string name );
	~FragTrap( void );
	FragTrap( const FragTrap &f );
	FragTrap &operator=( const FragTrap &f );

	void	highFivesGuys( void );

protected:
	int	_hit;
	int	_energy;
	int	_damage;

};

#endif