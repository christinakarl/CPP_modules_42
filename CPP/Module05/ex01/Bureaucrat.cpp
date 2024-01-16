/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:14:22 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/16 18:04:33 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(1)
{
	std::cout << "Bureaucrat class default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat class string constructor called" << std::endl;
	if (grade < 1)
	{
		throw GradeTooHighException();
		this->_grade = 1;
	}
	else if (grade > 150)
	{
		throw GradeTooLowException();
		this->_grade = 1;
	}
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &c) : _name(c._name), _grade(c._grade)
{
	std::cout << "Bureaucrat class copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &c)
{
	std::cout << "Bureaucrat class copy assignment operator called" << std::endl;
	(void) c;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

const std::string	Bureaucrat::getName(void) const
{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::upGrade(void)
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::downGrade(void)
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "The grade is too high";
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "The grade is too low";
}

void	Bureaucrat::signForm(Form &someForm)
{
	try {
		someForm.beSigned(*this);
	}
	catch (std::exception &e) {
		std::cout << this->_name + " couldn't sign " + someForm.getName() + " because " << e.what() << std::endl;
	}
	std::cout << this->_name + " signed " + someForm.getName() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &obj)
{
	os << obj.getName() + ", bureaucrat grade " << obj.getGrade();
	return os;
}
