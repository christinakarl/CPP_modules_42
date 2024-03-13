/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:27:09 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/17 11:53:55 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

AForm::AForm(void) : _name("some AForm"), _formSigned(0), _gradetoSign(150), _gradetoExec(150)
{
	std::cout << "AForm class default constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradetoSign, int gradetoExec) : _name(name), _formSigned(0), _gradetoSign(gradetoSign), _gradetoExec(gradetoExec)
{
	if (gradetoSign < 1)
		throw GradeTooHighException();
	else if (gradetoSign > 150)
		throw GradeTooLowException();
	if (gradetoExec < 1)
		throw GradeTooHighException();
	else if (gradetoExec > 150)
		throw GradeTooLowException();
	std::cout << "AForm class string constructor called" << std::endl;
}

AForm::AForm(const AForm &c) : _name(c._name), _formSigned(c._formSigned), _gradetoSign(c._gradetoSign), _gradetoExec(c._gradetoExec)
{
	if (this->_gradetoSign < 1)
		throw GradeTooHighException();
	else if (this->_gradetoSign > 150)
		throw GradeTooLowException();
	if (this->_gradetoExec < 1)
		throw GradeTooHighException();
	else if (this->_gradetoExec > 150)
		throw GradeTooLowException();
	std::cout << "AForm class copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &c)
{
	std::cout << "AForm class copy assignment operator called" << std::endl;
	(void) c;
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

//member functions
const std::string	AForm::getName(void) const
{
	return this->_name;
}

bool	AForm::getSigned(void) const
{
	return this->_formSigned;
}

const int	AForm::getGradetoSign(void) const
{
	return this->_gradetoSign;
}

const int	AForm::getGradetoExec(void) const
{
	return this->_gradetoExec;
}

void	AForm::beSigned(const Bureaucrat &horst)
{
	if (horst.getGrade() > this->_gradetoSign)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_formSigned = 1;
		std::cout << horst.getName() + " signed " + this->_name << std::endl;
	}
}

void	AForm::checkExecRequirements(const Bureaucrat &horst) const
{
	if (this->_formSigned == false)
		throw AForm::FormNotSignedException();
	else if (horst.getGrade() > this->_gradetoExec)
		throw Bureaucrat::GradeTooLowException();
}

//exceptions
const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return "the grade is too high [AForm exception]";
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return "the grade is too low [AForm exception]";
}

const char *AForm::FormNotSignedException::what(void) const throw()
{
	return "the form is not signed [AForm exception]";
}

//output overload <<
std::ostream& operator << (std::ostream& os, const AForm &obj)
{
	os << "AForm: " + obj.getName() + ", gradetoSign: " << obj.getGradetoSign() << ", gradetoExec: " << obj.getGradetoExec();
	return os;
}
