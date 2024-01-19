/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:26:59 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/17 11:16:54 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

#include <iostream>
#include <string>
#include <exception>
#include <ostream>
#include <cstdlib>
class Bureaucrat;

class AForm
{
public:
	AForm(void);
	AForm(std::string name, int gradetoSign, int gradetoExec);
	AForm(const AForm &c);
	AForm &operator=(const AForm &c);
	virtual ~AForm(void);

	const std::string	getName(void) const;
	bool				getSigned(void) const;
	const int			getGradetoSign(void) const;
	const int			getGradetoExec(void) const;

	void				beSigned(const Bureaucrat &horst);

	void				checkExecRequirements(Bureaucrat const &horst) const;
	virtual void		execute(Bureaucrat const &horst) const = 0;

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

	class FormNotSignedException : public std::exception
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

std::ostream& operator << (std::ostream& os, const AForm &obj);

#endif

