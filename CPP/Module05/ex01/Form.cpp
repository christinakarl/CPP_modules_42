/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:27:09 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/16 18:10:01 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("some form"), _formSigned(0), _gradetoSign(150), _gradetoExec(150)
{
	std::cout << "Form class default constructor called" << std::endl;
}

Form::Form(std::string name, int gradetoSign, int gradetoExec) : _name(name), _formSigned(0), _gradetoSign(gradetoSign), _gradetoExec(gradetoExec)
{
	if (gradetoSign < 1)
		throw GradeTooHighException();
	else if (gradetoSign > 150)
		throw GradeTooLowException();
	if (gradetoExec < 1)
		throw GradeTooHighException();
	else if (gradetoExec > 150)
		throw GradeTooLowException();
	std::cout << "Form class string constructor called" << std::endl;
}

Form::Form(const Form &c) : _name(c._name), _formSigned(0), _gradetoSign(_gradetoSign), _gradetoExec(_gradetoExec)
{
	if (this->_gradetoSign < 1)
		throw GradeTooHighException();
	else if (this->_gradetoSign > 150)
		throw GradeTooLowException();
	if (this->_gradetoExec < 1)
		throw GradeTooHighException();
	else if (this->_gradetoExec > 150)
		throw GradeTooLowException();
	std::cout << "Form class copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &c)
{
	std::cout << "Form class copy assignment operator called" << std::endl;
	(void) c;
	return *this;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

const std::string	Form::getName(void) const
{
	return this->_name;
}

bool	Form::getSigned(void) const
{
	this->_formSigned;
}

const int	Form::getGradetoSign(void) const
{
	this->_gradetoSign;
}

const int	Form::getGradetoExec(void) const
{
	this->_gradetoExec;
}

void	Form::beSigned(const Bureaucrat &horst)
{
	if (horst.getGrade() > this->_gradetoSign)
		throw GradeTooLowException();
	else
		this->_formSigned = 1;
}

std::ostream& operator << (std::ostream& os, const Form &obj)
{
	os << "Form: " + obj.getName() + ", gradetoSign: " << obj.getGradetoSign() << ", gradetoExec: " << obj.getGradetoExec();
	return os;
}
