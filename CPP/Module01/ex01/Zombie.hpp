/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:15:25 by ckarl             #+#    #+#             */
/*   Updated: 2023/12/13 15:57:04 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Zombie	*newZombie( std::string name );
Zombie	*zombieHorde( int N, std::string name );
void	freeZombielist( Zombie *zombielist );