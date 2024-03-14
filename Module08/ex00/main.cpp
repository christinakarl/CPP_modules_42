/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:34:04 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/14 12:19:29 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <cstdlib>
#include <vector>
#include <deque>
#include <list>

int	main()
{
	{
		std::vector<int>	test;
		std::vector<int>	test1;

		test.push_back(2); test.push_back(5); test.push_back(8); test.push_back(9);
		try {
			easyfind(test, 5);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::deque<unsigned int> test3;
		std::deque<unsigned int> test4;

		test3.push_back(44); test3.push_back(3); test3.push_back(0);
		try {
			easyfind(test4, 3);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::list<char> test5;
		std::list<char> test6;

		test5.push_back(44); test5.push_back(3); test5.push_back(0);
		try {
			easyfind(test6, 3);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}