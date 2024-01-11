/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:27:23 by ckarl             #+#    #+#             */
/*   Updated: 2023/12/13 15:52:59 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>
#include <iostream>
#include <iomanip>

int	main( void )
{
	Zombie	*myZombie;

	myZombie = newZombie("helmut");
	myZombie->announce();

	randomChump("");
	delete myZombie;
	return 0;
}
