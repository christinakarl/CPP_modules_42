/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:29:22 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/04 18:39:02 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#ifndef WEAPON_HPP
#define WEAPON_HPP
/*
	a class can have more than 1 constructor
	when class is created, compiler checks parameters and chooses matching constructor
*/

class Weapon {

public:
	Weapon( void );
	Weapon( std::string newtype );
	~Weapon( void );

	const std::string	&getType( void );
	void	setType( std::string str );

private:
	std::string	_type;
};

#endif