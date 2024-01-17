/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:39:16 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/17 18:13:58 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"
#include "../include/AForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RRF", 72, 45), _target("default target")
{
	std::cout << "RobotomyRequestForm class default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RRF", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm class string constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &c) : AForm(c), _target(c._target)
{
	std::cout << "RobotomyRequestForm class copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &c)
{
	std::cout << "RobotomyRequestForm class copy assignment operator called" << std::endl;
	if (this != &c)
	{
		AForm::operator=(c);
		this->_target = c._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &horst) const
{
	try {
		this->checkExecRequirements(horst);
	}
	catch (std::exception &e) {
		std::cerr << "Form RRF with target " + this->_target + " could not be executed because: " << e.what() << std::endl;
		return ;
	}

	std::srand(time(NULL));
	std::cout << "[DRILLING NOISE] bbbrmmm sadfjkajc78/%zzzzzzzzzzbrqqqqqqquuiibbfmmmmm" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << "RRF target " + this->_target + " has been successfully robotomized" << std::endl;
	else
		std::cout << "Robotomization of RRF target " + this->_target + " has failed" << std::endl;
}
