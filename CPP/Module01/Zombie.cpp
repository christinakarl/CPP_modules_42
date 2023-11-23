/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:19:35 by ckarl             #+#    #+#             */
/*   Updated: 2023/11/23 16:54:51 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie( void )
{
	if (this->_name.empty())
		this->_name = "no name";
	std::cout << this->_name + " is being destroyed" << std::endl;
	return ;
}

//zombie announces its name
void	Zombie::announce( void )
{
	std::cout << this->_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
	if (this->_name.empty())
		this->_name = "no name";
}
