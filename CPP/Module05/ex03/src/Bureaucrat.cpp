/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:14:22 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/17 18:14:13 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(1)
{
	std::cout << "Bureaucrat class default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat class string constructor called" << std::endl;
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
	return "the grade is too high [Bureaucrat exception]";
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "the grade is too low [Bureaucrat exception]";
}

void	Bureaucrat::signForm(AForm &someAForm)
{
	try {
		someAForm.beSigned(*this);
	}
	catch (std::exception &e) {
		std::cerr << "Bureaucrat " + this->_name + " couldn't sign " + someAForm.getName() + " because: " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &someAform)
{
	someAform.execute(*this);
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat &obj)
{
	os << "Bureaucrat: " + obj.getName() + ", grade: " << obj.getGrade();
	return os;
}
