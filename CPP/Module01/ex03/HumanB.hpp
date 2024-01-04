/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:30:20 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/04 18:39:38 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB{

public:
	HumanB( void );
	HumanB( std::string newname );
	~HumanB( void );

	void	attack( void );
	void	setWeapon( Weapon &newWeapon);

private:
	std::string	_name;
	Weapon *_weapon;
};

#endif