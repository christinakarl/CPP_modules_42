/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:33:53 by ckarl             #+#    #+#             */
/*   Updated: 2023/11/23 16:42:57 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie *newZ;

	newZ = (Zombie *)std::malloc(sizeof(Zombie));
	if (!newZ)
		return NULL;
	newZ->setName( name );
	return (newZ);
}
