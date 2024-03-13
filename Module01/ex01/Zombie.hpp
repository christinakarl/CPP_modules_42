/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:15:25 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/09 13:04:44 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Zombie {

public:
	Zombie( void );
	~Zombie( void );

	void	announce( void );
	void	setName( std::string name );
	Zombie	*next;

private:
	std::string	_name;
};

Zombie	*zombieHorde( int N, std::string name );

#endif