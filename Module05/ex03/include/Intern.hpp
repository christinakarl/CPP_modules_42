#ifndef Intern_HPP
# define Intern_HPP

#include <iostream>
#include <string>
#include <exception>
#include <ostream>
#include <cstdlib>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(std::string name);
	Intern(const Intern &c);
	Intern &operator=(const Intern &c);
	~Intern(void);

	AForm*	makeForm(std::string FormName, std::string FormTarget);
	static AForm*	RobRequForm(std::string target);
	static AForm*	PresPardForm(std::string target);
	static AForm*	ShrubCreaForm(std::string target);

	class InternException : public std::exception
	{
	public:
		virtual const char *what(void) const throw();
	};
};

#endif

