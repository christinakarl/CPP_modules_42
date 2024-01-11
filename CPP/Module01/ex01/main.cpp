/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:34:41 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/04 14:03:41 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*myZombie;

	myZombie = zombieHorde( 5, "helmut" );
	myZombie->announce();
	// myZombie->next->announce();
	// myZombie->next->next->announce();

	delete []myZombie;
	return 0;
}