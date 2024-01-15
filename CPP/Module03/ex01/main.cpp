/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:55:03 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 13:53:29 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*
	Overusage of inheritance is not good. From that viewpoint, one should always
	follow the principle of Liskov substitution, which states that any subclass
	should be able to replace its superclass without breaking the functionality of the system.

	class <derived_class_name> : <access-specifier>
	<base_class_name>
	{
		//body
	}

	PRIVATE members are only accessible within the class defining them.
	PROTECTED members are accessible in the class that defines them and
	in classes that inherit from that class but not outside of said class.
*/

int	main(void)
{
	ClapTrap	hulk("hulk");
	ScavTrap	bambi("bambi");
	ScavTrap	copy(bambi);
	ScavTrap	copy2;

	copy2 = copy;

	std::cout << std::endl;
	hulk.attack("bambi");
	hulk.beRepaired(30);
	hulk.takeDamage(10);
	bambi.takeDamage(90);
	bambi.attack("hulk");
	copy.attack("original bambi");
	bambi.beRepaired(2);
	copy2.guardGate();
	bambi.attack("hulk");
	std::cout << std::endl;

	return 0;
}
