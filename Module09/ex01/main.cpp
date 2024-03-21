/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:44:22 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/21 17:04:35 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Error: Please enter a string of digits (0 - 10) and operators (+-/*) as an argument" << std::endl;
		return 1;
	}
	try {
		RPN	test(argv[1]);
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}