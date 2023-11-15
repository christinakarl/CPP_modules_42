/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:38:34 by ckarl             #+#    #+#             */
/*   Updated: 2023/11/15 23:15:57 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "ClassPhonebook.hpp"
#include "ClassContact.hpp"

std::string	get_ctc_info( std::string field )
{
	std::string	prompt;

	while (1)
	{
		std::cout << "\033[2;35mEnter your " + field + ": \033[0m";
		std::getline(std::cin, prompt);
		if (prompt.size() > 0)
			break ;
	}
	return (prompt);
}

int	main( void )
{
	std::string	prompt;
	Phonebook	book;
	Contact		ctc;
	int			nbr;

	std::cout << "\033[1;34mWelcome to your awesome phonebook!\033[0m" << std::endl;
	while (1)
	{
		std::cout << "\033[1;34mPlease enter one of these three options: ADD / SEARCH / EXIT\033[0m" << std::endl;
		std::getline(std::cin, prompt);
		if (prompt.compare("ADD") == 0)
		{
			std::cout << "\n\033[1;35mYou may now add a new contact\033[0m\n\n";
			ctc.assignValue(get_ctc_info("first name"), 0);
			ctc.assignValue(get_ctc_info("last name"), 1);
			ctc.assignValue(get_ctc_info("nickname"), 2);
			ctc.assignValue(get_ctc_info("phone number"), 3);
			ctc.assignValue(get_ctc_info("darkest secret"), 4);
			book.addCtc(ctc);
		}
		if (prompt.compare("SEARCH") == 0)
		{
			if (book.display_book() == 0)
			{
				while (1)
				{
					std::cout << "\n\033[1;35mChoose a contact by indicating an index from 0 to 7\033[0m\n";
					std::getline(std::cin, prompt);
					nbr = std::stoi(prompt);
					if (nbr < 0 || nbr > 7 || prompt.empty())
						std::cout << "\033[1;35mThis index is out of range\033[0m\n";
					else
					{
						book.getctc_info(nbr);
						break ;
					}
				}
			}
		}
		if (prompt.compare("EXIT") == 0)
		{
			std::cout << "\033[1;31m\nDestroying your phonebook\033[0m\n\n";
			return 0;
		}
	}

	return 0;

}
