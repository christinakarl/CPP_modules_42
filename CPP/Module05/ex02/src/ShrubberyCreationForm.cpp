/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:39:37 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/17 18:14:06 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
#include "../include/AForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("SCF", 145, 137), _target("default target")
{
	std::cout << "ShrubberyCreationForm class default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("SCF", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm class string constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &c) : AForm(c), _target(c._target)
{
	std::cout << "ShrubberyCreationForm class copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &c)
{
	std::cout << "ShrubberyCreationForm class copy assignment operator called" << std::endl;
	if (this != &c)
	{
		AForm::operator=(c);
		this->_target = c._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &horst) const
{
	try {
		this->checkExecRequirements(horst);
	}
	catch (std::exception &e) {
		std::cerr << "Form SCF with target " + this->_target + " could not be executed because: " << e.what() << std::endl;
		return ;
	}

	std::ofstream	outfile;

	outfile.open(this->_target + "_shrubbery", std::fstream::out);
	if (outfile.fail())
	{
		std::cerr << "File creation in SCF::execute function failed" << std::endl;
		return ;
	}
	outfile << "    I\n";
	outfile << "   / \\\n";
	outfile << "  A   M\n";
	outfile << " / \\   \\\n";
	outfile << "D   O   T\n";
	outfile.close();
}
