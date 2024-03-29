/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:55:03 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 18:17:47 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

/*
	-Wshadow flag = detect doubly declared variables (inner and outer scope)
	-Wno-shadow flag = silence the above warning if the double is intentional
*/

int	main(void)
{
	DiamondTrap	shiny("Shiny");
	DiamondTrap	brillant;

	std::cout << std::endl;
	shiny.attack("someone else");
	shiny.whoAmI();
	std::cout << std::endl;
	brillant.whoAmI();
	std::cout << std::endl;

	return 0;
}
