/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:11:25 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/19 15:21:53 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/AForm.hpp"
#include "../include/Intern.hpp"

std::string	getInput(int i)
{
	std::string	prompt;

	if (i < 1 || i > 2)
		return "";
	while (1)
	{
		if (i == 1)
			std::cout << "\033[1;35mWhich form would you like to create? \
[shrubbery creation, robotomy request, presidential pardon]\n\033[0m";
		else
			std::cout << "\033[1;35mDefine the form target please\n\033[0m";
		std::getline(std::cin, prompt);
		if (prompt.size() > 0)
			break ;
	}
	return (prompt);
}


int	main(int argc, char **argv)
{
	if (argc != 1)
		std::cout << "Please start this program without any arguments" << std::endl;
	try {
		Intern	bob;

		std::string FormName = getInput(1);
		std::string FormTarget = getInput(2);

		std::cout << "\033[1;34mOur intern will try their best to create what you asked for\033[0m" << std::endl;

		std::cout << std::endl;
		AForm *form1= bob.makeForm(FormName, FormTarget);
		if (form1)
		{
			Bureaucrat	horst("horst", 12);
			std::cout << std::endl;
			horst.signForm(*form1);
			horst.executeForm(*form1);
			std::cout << std::endl;
			delete form1;
		}
	}
	catch (std::exception &e) {
		std::cerr << "\nException caught: " << e.what() << std::endl;
	}

	return 0;
}
