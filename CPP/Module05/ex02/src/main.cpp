/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:11:25 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/17 18:15:19 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/AForm.hpp"

int	main(void)
{
	try {
		PresidentialPardonForm f1("JustSomeone");
		RobotomyRequestForm f2("robotomizeMe");
		AForm&		robots = f2;
		AForm&		fun = f1;
		Bureaucrat	horst("horst", 140);

		std::cout << std::endl;
		// horst.signForm(fun);
		horst.signForm(robots);
		// horst.executeForm(fun);
		horst.executeForm(robots);
		// std::cout << fun << std::endl;
		// std::cout << horst << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;

	}


	return 0;
}
