/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:15:25 by ckarl             #+#    #+#             */
/*   Updated: 2023/11/23 16:46:46 by ckarl            ###   ########.fr       */
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

private:
	std::string	_name;
};

void	randomChump( std::string name );
Zombie	*newZombie( std::string name );