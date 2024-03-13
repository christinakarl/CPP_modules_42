/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:15:25 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/09 13:03:18 by ckarl            ###   ########.fr       */
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

private:
	std::string	_name;
};

void	randomChump( std::string name );
Zombie	*newZombie( std::string name );

#endif