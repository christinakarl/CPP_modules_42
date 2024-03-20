/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:44:22 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/20 18:50:55 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(void)
{
	try {
		BitcoinExchange	ex("data.csv");
		ex.getPrice("test.csv");


	}
	catch (std::exception &e) {
		std::cout << "exception caught: " << e.what() << std::endl;
	}

	return 0;
}