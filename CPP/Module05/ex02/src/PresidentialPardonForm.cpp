/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:19:31 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/17 18:13:52 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"
#include "../include/AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PPF", 25, 5), _target("default target")
{
	std::cout << "PresidentialPardonForm class default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PPF", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm class string constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &c) : AForm(c), _target(c._target)
{
	std::cout << "PresidentialPardonForm class copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &c)
{
	std::cout << "PresidentialPardonForm class copy assignment operator called" << std::endl;
	if (this != &c)
	{
		AForm::operator=(c);
		this->_target = c._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const &horst) const
{
	try {
		this->checkExecRequirements(horst);
	}
	catch (std::exception &e) {
		std::cerr << "Form PPF with target " + this->_target + " could not be executed because: " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_target + " has been pardoned by Zaphoid Beeblebrox" << std::endl;
}
