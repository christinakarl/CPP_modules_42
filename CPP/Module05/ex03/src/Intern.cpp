/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:23:18 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/19 13:14:49 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern class default constructor called" << std::endl;
}

Intern::Intern(std::string name)
{
	(void) name;
	std::cout << "Intern class string constructor called" << std::endl;
}

Intern::Intern(const Intern &c)
{
	std::cout << "Intern class copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &c)
{
	std::cout << "Intern class copy assignment operator called" << std::endl;
	return *this;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

AForm*	Intern::RobRequForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::PresPardForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::ShrubCreaForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

const char *Intern::InternException::what(void) const throw()
{
	return "Intern could not create this form, it does not exist";
}

AForm*	Intern::makeForm(std::string FormName, std::string FormTarget)
{
	std::string	formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm	*(*formPointers[3])(std::string target) = {RobRequForm, PresPardForm, ShrubCreaForm};

	for (int i = 0; i < 3; i++)
	{
		if (formNames[i].compare(FormName) == 0)
		{
			std::cout << "Intern created " + FormName + " with target " + FormTarget << std::endl;
			return formPointers[i](FormTarget);
		}
	}
	throw InternException();
}
