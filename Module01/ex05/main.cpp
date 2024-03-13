/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:21:33 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/08 20:31:25 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int	main( void )
{
	Harl		typicalHarl;
	std::string	input;

	while (1)
	{
		std::cout << "\033[1;35mWhat does Harl complain about? {info, debug, warning, error}\033[0m" << std::endl;
		std::getline(std::cin, input);
		if (input == "nothing")
			break ;
		if (!input.empty())
			typicalHarl.complain(input);
	}
	return 0;
}
