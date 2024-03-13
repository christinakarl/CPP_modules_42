/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:41:47 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/09 13:08:54 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA{

public:
	HumanA( std::string newname, Weapon &newWeapon );
	~HumanA( void );

	void	attack( void );

private:
	std::string	_name;
	Weapon &_weapon;
};

#endif