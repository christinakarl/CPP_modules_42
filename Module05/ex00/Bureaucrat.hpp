#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <iostream>
#include <string>

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

