/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:26:59 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/16 18:09:56 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
public:
	Form(void);
	Form(std::string name, int gradetoSign, int gradetoExec);
	Form(const Form &c);
	Form &operator=(const Form &c);
	~Form(void);

	const std::string	getName(void) const;
	bool				getSigned(void) const;
	const int			getGradetoSign(void) const;
	const int			getGradetoExec(void) const;

	void				beSigned(const Bureaucrat &horst);


	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what(void) const throw();
	};

private:
	const std::string	_name;
	bool				_formSigned;
	const int			_gradetoSign;
	const int			_gradetoExec;
};

std::ostream& operator << (std::ostream& os, const Form &obj);

#endif

