/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:34:41 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/08 13:11:11 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main( void )
{

{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}
{
	Weapon club = Weapon("crude spiked club");

	HumanB jim("jim");
	// jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}
	return 0;
}