/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:27:04 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/17 11:16:59 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <ostream>
#include <cstdlib>
class Form;

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &c);
	Bureaucrat &operator = (const Bureaucrat &c);
	~Bureaucrat(void);

	const std::string	getName(void) const;
	int					getGrade(void) const;
	void				upGrade(void);
	void				downGrade(void);

	void				signForm(Form &someForm);

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
	int					_grade;
};

std::ostream& operator << (std::ostream& os, const Bureaucrat &obj);

#endif

