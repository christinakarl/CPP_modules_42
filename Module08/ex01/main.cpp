/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:34:04 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/19 13:46:34 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <vector>
#include <deque>
#include <list>

int	main()
{
	Span	test1(4);
	Span	test2(1000);
	int	array[10] = {6, 8, 3, 2, 523, -233, 5, 0, 999, 22};
	std::vector<int>	vector(5, 10);

	try {
		test2.addVectorRange(vector.begin(), vector.end());
		test2.addArrayRange(array, 4);
		std::cout << "test2 longest span: " << test2.longestSpan() << std::endl;
		std::cout << "test2 shortest span: " <<test2.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "exception caught: " << e.what() << std::endl;
	}

	test1.addNumber(20);
	test1.addNumber(5);
	test1.addNumber(19);
	test1.addNumber(7);

	std::cout << "test 1 longest span: " << test1.longestSpan() << std::endl;
	std::cout << "test 1 shortest span: " <<test1.shortestSpan() << std::endl;

	return 0;
}