/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:11:25 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/17 11:52:52 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try {
		Form		fun("fun", 10, 150);
		Bureaucrat	horst("horst", 12);

		std::cout << std::endl;
		horst.signForm(fun);
		std::cout << fun << std::endl;
		std::cout << horst << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
