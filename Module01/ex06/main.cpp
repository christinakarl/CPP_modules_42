/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:21:33 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/08 21:21:06 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int	main( int argc, char **argv )
{
	Harl	typicalHarl;

	if (argc != 2)
	{
		std::cout << "Make Harl complain by indicating one level: debug, info, warning, error" << std::endl;
		return 0;
	}

	std::string	input(argv[1]);
	typicalHarl.complainForever(input);
	return 0;
}
