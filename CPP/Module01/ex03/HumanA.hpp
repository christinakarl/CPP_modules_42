/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:41:47 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/04 18:39:59 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

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