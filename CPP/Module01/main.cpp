/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:27:23 by ckarl             #+#    #+#             */
/*   Updated: 2023/11/23 16:53:00 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>
#include <iostream>
#include <iomanip>

int	main( void )
{
	Zombie	*myZombie;

	myZombie = newZombie("");
	myZombie->announce();

	randomChump("agathe");
	myZombie->~Zombie();
	free(myZombie);
	return 0;
}
