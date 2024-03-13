/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:11:25 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/16 17:05:25 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try {
		Bureaucrat	henry("henry", -7);
	}
	catch (std::exception &e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat	alfons("alfons", 166);
	}
	catch (std::exception &e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat	george("george", 147);
	std::cout << george << std::endl;

	return 0;
}
