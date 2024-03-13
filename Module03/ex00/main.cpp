/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:55:03 by ckarl             #+#    #+#             */
/*   Updated: 2024/02/21 10:45:29 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	hulk("hulk");
	ClapTrap	bambi("bambi");

	hulk.attack("bambi");
	hulk.beRepaired(30);
	hulk.takeDamage(10);
	bambi.takeDamage(90);
	bambi.attack("hulk");
	bambi.beRepaired(2);
	bambi.attack("hulk");
	return 0;
}
