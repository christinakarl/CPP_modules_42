/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:34:04 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/12 16:02:29 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

int	main()
{
	// std::string *a = new std::string();
	// std::cout << *a << std::endl;

	try {
		Array<int>	test(5);
		Array<int>	test1 = test;

		// test.getElement(4);
		std::cout << "size: " << test.size() << std::endl;
		std::cout << "array: " << &test << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}