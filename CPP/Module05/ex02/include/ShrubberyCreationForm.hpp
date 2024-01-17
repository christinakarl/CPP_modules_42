/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:39:05 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/17 17:38:54 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include <iostream>
#include <string>
#include <exception>
#include <ostream>
#include <cstdlib>
#include "AForm.hpp"
/*
	Required grades: sign 145, exec 137
	Create a file <target>_shrubbery in the working directory,
	and writes ASCII trees inside it.
*/

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &c);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &c);
	~ShrubberyCreationForm(void);

	void	execute(Bureaucrat const &horst) const;

protected:
	std::string	_target;
};

#endif

