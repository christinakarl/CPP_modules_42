/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:38:34 by ckarl             #+#    #+#             */
/*   Updated: 2023/09/25 12:37:30 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "ClassPhonebook.hpp"
#include "ClassContact.hpp"

int	main()
{
	Contact		person1;
	std::string	prompt;

	person1.assignValue("helmut", 0);
	person1.assignValue("schmitt", 1);
	person1.index = 0;

	std::cout << person1.getValue(0) + person1.getValue(1) << person1.index << std::endl;

	std::cout << "Welcome to your awesome phonebook!" << std::endl;
	while (1)
	{
		std::cout << "Please enter one of our three options: ADD / SEARCH / EXIT" << std::endl;
		std::cin >> prompt;
		if (prompt.compare("ADD") == 0)
		{
			std::cout << "typed ADD\n";
		}
		if (prompt.compare("SEARCH") == 0)
		{
			std::cout << "we're searching your phonebook...\n";
		}
		if (prompt.compare("EXIT") == 0)
		{
			std::cout << "Exiting your phonebook\n";
			return 0;
		}
	}

	return 0;

}
