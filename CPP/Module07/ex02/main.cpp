/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:34:04 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/12 16:27:38 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

int	main()
{
	// std::string *a = new std::string();
	// std::cout << *a << std::endl;

	try {
		Array<int>	test(2);
		Array<int>	test1 = test;

		std::cout << "size of test: " << test.size() << std::endl;
		// std::cout << "accessing out of bounds element in test: " << test[3] << std::endl;
		test[1] = 9;
		std::cout << "test[1] = " << test[1] << " and test1[1] = " << test1[1] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Array<std::string>	test2(2);

		std::cout << "size of test2: " << test2.size() << std::endl;
		test2[1] = "hello";
		std::cout << "accessing out of bounds element in test: " << test2[1] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}